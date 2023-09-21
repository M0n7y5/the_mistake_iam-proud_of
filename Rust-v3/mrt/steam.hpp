#pragma once

#include "ISteamClient.h"
#include "ISteamHTTP.h"
#include "ISteamUtils.h"
#include <stdint.h>
#include <string>

#include "xorstr.hpp"
#include "lazy_importer.hpp"
#include <unordered_map>

// #include "crt.hpp"
// #include "KotlarSecurity.h"
#define LI_FINDFROMNAME(name) (void*)(::li::detail::find_nocache<::li::detail::khash(name)>())

namespace Base64
{
    inline bool IsBase64(BYTE c)
    {
        return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c == '+') || (c == '/'));
    }

    inline void Decode(const char* encodedStr, int in_len, std::vector<uint8_t>& out)
    {
        static const std::string base64_chars = _("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");

        int  i   = 0;
        int  j   = 0;
        int  in_ = 0;
        BYTE char_array_4[4], char_array_3[3];

        while (in_len-- && (encodedStr[in_] != '=') && Base64::IsBase64(encodedStr[in_]))
        {
            char_array_4[i++] = encodedStr[in_];
            in_++;
            if (i == 4)
            {
                for (i = 0; i < 4; i++)
                    char_array_4[i] = base64_chars.find(char_array_4[i]);

                char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
                char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
                char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

                for (i = 0; (i < 3); i++)
                    out.push_back(char_array_3[i]);
                i = 0;
            }
        }

        if (i)
        {
            for (j = i; j < 4; j++)
                char_array_4[j] = 0;

            for (j = 0; j < 4; j++)
                char_array_4[j] = base64_chars.find(char_array_4[j]);

            char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
            char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
            char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

            for (j = 0; (j < i - 1); j++)
                out.push_back(char_array_3[j]);
        }

        out.push_back(0);
        out.push_back(0);
    }

    inline std::string Encode(const std::vector<uint8_t>& data)
    {
        static constexpr char sEncodingTable[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                                  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                                                  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                                                  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                                                  '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};

        size_t      in_len  = data.size();
        size_t      out_len = 4 * ((in_len + 2) / 3);
        std::string ret(out_len, '\0');
        size_t      i;
        char*       p = const_cast<char*>(ret.c_str());

        for (i = 0; i < in_len - 2; i += 3)
        {
            *p++ = sEncodingTable[(data[i] >> 2) & 0x3F];
            *p++ = sEncodingTable[((data[i] & 0x3) << 4) | ((int)(data[i + 1] & 0xF0) >> 4)];
            *p++ = sEncodingTable[((data[i + 1] & 0xF) << 2) | ((int)(data[i + 2] & 0xC0) >> 6)];
            *p++ = sEncodingTable[data[i + 2] & 0x3F];
        }
        if (i < in_len)
        {
            *p++ = sEncodingTable[(data[i] >> 2) & 0x3F];
            if (i == (in_len - 1))
            {
                *p++ = sEncodingTable[((data[i] & 0x3) << 4)];
                *p++ = '=';
            }
            else
            {
                *p++ = sEncodingTable[((data[i] & 0x3) << 4) | ((int)(data[i + 1] & 0xF0) >> 4)];
                *p++ = sEncodingTable[((data[i + 1] & 0xF) << 2)];
            }
            *p++ = '=';
        }

        return ret;
    }
} // namespace Base64

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
            snprintf(buff, 192, _("https://dev.getrekt.me/sugondese/karpalnitunel?karbanatek=%llu&spenat=%llu"), 42llu,
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