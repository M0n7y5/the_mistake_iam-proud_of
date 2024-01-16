#pragma once

#include "ISteamClient.h"
#include "ISteamHTTP.h"
#include "ISteamUtils.h"
#include <stdint.h>
#include <string>

#include "xorstr.hpp"
#include "base64.h"
#include "lazy_importer.hpp"
#include <unordered_map>

// #include "crt.hpp"
// #include "KotlarSecurity.h"
#define LI_FINDFROMNAME(name) (void*)(::li::detail::find_nocache<::li::detail::khash(name)>())
namespace Steam
{
    inline ISteamClient* m_pSteamClient = nullptr;
    inline HSteamUser    pHSteamUser    = 0;
    inline HSteamPipe    pHSteamPipe    = 0;
    inline ISteamHTTP*   m_pSteamHTTP   = nullptr;
    inline ISteamUtils*  steamUtils{};

    constexpr auto crtbaseModule = LI_MODULE("steam_api64.dll");

    // dummm methods
    inline ISteamClient* SteamClient()
    {
        return nullptr;
    };
    inline HSteamUser SteamAPI_GetHSteamUser()
    {
        return 0;
    };

    inline HSteamPipe SteamAPI_GetHSteamPipe()
    {
        return 0;
    };

    inline void Initialize()
    {
        m_pSteamClient = LI_FN(SteamClient).in_safe(crtbaseModule.get())();
        pHSteamUser    = LI_FN(SteamAPI_GetHSteamUser).in_safe(crtbaseModule.get())();
        pHSteamPipe    = LI_FN(SteamAPI_GetHSteamPipe).in_safe(crtbaseModule.get())();
        m_pSteamHTTP   = m_pSteamClient->GetISteamHTTP(pHSteamUser, pHSteamPipe, _(STEAMHTTP_INTERFACE_VERSION));
        steamUtils     = m_pSteamClient->GetISteamUtils(pHSteamPipe, _(STEAMUTILS_INTERFACE_VERSION));
    }

    struct CachedSteamRequest
    {
        bool              m_bFinished      = false;
        std::string       m_strResult      = "";
        HTTPRequestHandle m_pRequestHandle = 0;
    };

    inline std::unordered_map<ULONG64, CachedSteamRequest> m_pSteamNameCache;

    inline void CacheRequest(ULONG64 m_nSteamID)
    {
        std::string m_strRequestURL =
            std::string(_("https://cdn_.getrekt.io/api/rust/resolver.php?steamid=")) + std::to_string(m_nSteamID);
        HTTPRequestHandle m_pRequest = m_pSteamHTTP->CreateHTTPRequest(k_EHTTPMethodGET, m_strRequestURL.c_str());

        SteamAPICall_t m_pCallHandle = 0;
        m_pSteamHTTP->SendHTTPRequest(m_pRequest, &m_pCallHandle);

        m_pSteamNameCache[m_nSteamID] = {false, "", m_pRequest};
    }

    inline bool ResolvePlayerNameFromSteamID(ULONG64 m_nSteamID, std::string& m_strName)
    {
        if (m_pSteamNameCache.find(m_nSteamID) == m_pSteamNameCache.end())
        {
            CacheRequest(m_nSteamID);
            return false;
        }

        CachedSteamRequest& m_pCachedRequest = m_pSteamNameCache[m_nSteamID];
        if (!m_pCachedRequest.m_bFinished)
        {
            uint32 m_nBodySize = 0;
            m_pSteamHTTP->GetHTTPResponseBodySize(m_pCachedRequest.m_pRequestHandle, &m_nBodySize);

            if (m_nBodySize != 0)
            {
                m_pCachedRequest.m_strResult.resize(m_nBodySize + 1);
                m_pSteamHTTP->GetHTTPResponseBodyData(m_pCachedRequest.m_pRequestHandle,
                                                      (unsigned char*)m_pCachedRequest.m_strResult.data(), m_nBodySize);
                m_pCachedRequest.m_strResult.back() = 0;

                m_pCachedRequest.m_bFinished = true;

                m_pSteamHTTP->ReleaseHTTPRequest(m_pCachedRequest.m_pRequestHandle);
                m_pCachedRequest.m_pRequestHandle = 0;
            }
            else
            {
                return false;
            }
        }

        m_strName = m_pCachedRequest.m_strResult;
        return true;
    }

#if 1
    // __forceinline bool GetOffsets()
    // {
    // 	static HTTPRequestHandle m_pRequest;
    // 	static SteamAPICall_t m_pCallHandle;
    // 	static bool m_bResult;

    // 	const auto token = _(TOKENCONTENT);

    // 	//for (size_t i = 0; i < 8; i++)
    // 	//{
    // 	//	tokenPart1[i] ^= tokenXor[i];
    // 	//	tokenPart2[i] ^= tokenXor[i];
    // 	//	tokenPart3[i] ^= tokenXor[i];
    // 	//	tokenPart4[i] ^= tokenXor[i];
    // 	//}

    // 	if (!m_pRequest || !m_bResult)
    // 	{
    // 		char urlBuff[96];
    // 		snprintf(urlBuff, 96, _("%s"), _("https://getrekt.io/api/rust/begin.php?token="),
    // token);

    // 		m_pRequest = m_pSteamHTTP->CreateHTTPRequest(k_EHTTPMethodPOST, urlBuff);

    // 		RtlZeroMemory(urlBuff, 96);

    // 		m_bResult = m_pSteamHTTP->SendHTTPRequest(m_pRequest, &m_pCallHandle);
    // 	}

    // 	uint32 m_nBodySize = 0;
    // 	m_pSteamHTTP->GetHTTPResponseBodySize(m_pRequest, &m_nBodySize);
    // 	if (m_nBodySize != 0)
    // 	{
    // 		std::string out;
    // 		out.resize(m_nBodySize + 1);
    // 		m_pSteamHTTP->GetHTTPResponseBodyData(m_pRequest, (unsigned char*)out.data(),
    // m_nBodySize); 		m_pSteamHTTP->ReleaseHTTPRequest(m_pRequest);

    // 		std::vector<BYTE> xoredOffsets = Base64::Decode(out.c_str(), out.size());

    // 		char tokenBuff[40];
    // 		snprintf(tokenBuff, 40, _("%s"), token);

    // 		BYTE* dataPtr = xoredOffsets.data();
    // 		for (size_t i = 0; i < xoredOffsets.size(); i++)
    // 			dataPtr[i] ^= tokenBuff[i % 32];

    // 		RtlZeroMemory(tokenBuff, 40);

    // 		//O = *(Offsets*)xoredOffsets.data();
    // 		O = (Offsets*)new unsigned char[sizeof(Offsets)];
    // 		memcpy(O, xoredOffsets.data(), sizeof(Offsets));

    // 		xoredOffsets.clear();
    // 	}
    // 	else
    // 	{
    // 		return false;
    // 	}

    // 	m_pRequest = 0;
    // 	m_pCallHandle = 0;
    // 	m_bResult = false;
    // 	return true;
    // }

    inline bool GetFont(std::vector<uint8_t>& fntOut, uint64_t hashedName)
    {
        static HTTPRequestHandle m_pRequest;
        static SteamAPICall_t    m_pCallHandle;
        static bool              m_bResult;
        char                     buff[192]{};

        std::string tmp;

        if (!m_pRequest || !m_bResult)
        {
            sprintf_s(buff, _("https://dev.getrekt.me/sugondese/karpalnitunel?karbanatek=%llu&spenat=%llu"), 42llu,
                     hashedName);

            m_pRequest = m_pSteamHTTP->CreateHTTPRequest(k_EHTTPMethodGET, buff);

            m_pSteamHTTP->SetHTTPRequestHeaderValue(
                m_pRequest, _("CF-Access-Client-Secret"),
                _("fbf068466f71fb92f7c35ffddfd4d2e340ab6c96bdf22dd2bcc699ebee4ea604"));

            m_pSteamHTTP->SetHTTPRequestHeaderValue(m_pRequest, _("CF-Access-Client-Id"),
                                                    _("fe9fecbdf3fa37590efc008866996824.access"));

            m_bResult = m_pSteamHTTP->SendHTTPRequest(m_pRequest, &m_pCallHandle);
        }

        uint32 m_nBodySize = 0;
        m_pSteamHTTP->GetHTTPResponseBodySize(m_pRequest, &m_nBodySize);
        if (m_nBodySize != 0)
        {
            tmp.resize(m_nBodySize + 1);
            m_pSteamHTTP->GetHTTPResponseBodyData(m_pRequest, (unsigned char*)tmp.data(), m_nBodySize);
            m_pSteamHTTP->ReleaseHTTPRequest(m_pRequest);

            Base64::Decode(tmp.c_str(), tmp.length(), fntOut);
        }
        else
        {
            return false;
        }

        m_pRequest    = 0;
        m_pCallHandle = 0;
        m_bResult     = false;
        return true;
    }
#endif
}; // namespace Steam