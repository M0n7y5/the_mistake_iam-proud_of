#pragma once
#include <optional>
#include <stdint.h>
#include <string_view>
#include <tuple>
#include <vcruntime.h>
#include <vector>
#include <string>
#include "xxhash.h"

namespace montys
{
    class StringPoolParty
    {

      private:
        // types
        using BufferType = std::vector<char>;

        static constexpr XXH64_hash_t SeedHash = 0xDEADBEEFULL;

        struct PoolItemMetadata
        {
            XXH64_hash_t hash{};
            const char*  ptr{};
        };

        struct Pool
        {
            BufferType buffer{};
            size_t     maxSize{};
            int        idx = {};

            inline explicit Pool(size_t size)
            {
                maxSize = size + 2;
                // prevent reallocations
                buffer.resize(maxSize);
            }

            inline bool AddString(char* string, size_t size, PoolItemMetadata& metadata)
            {
                if (idx + 2 + size > maxSize)
                    return false;

                // auto hash = XXH64(string, size, SeedHash);

                // buffer.emp auto placedStr = buffer.insert(buffer.end(), string, string + size);
                // buffer.emplace_back(0); // null terminator

                for (size_t i = 0; i < size; i++)
                {
                    buffer[idx + i] = string[i];
                }

                metadata.ptr = &buffer[idx];

                idx += size + 2;
                return true;
            }
        };

        size_t sizePerPool{};

        std::vector<Pool> pools{};

        // TODO: make it dictionary?? Iterating thru 1K entries is still faster tho
        // do we need more than 1K entries?
        std::vector<PoolItemMetadata> poolDatas{};

      public:
        StringPoolParty(size_t sizePerPool = 4096 * 2)
        {
            this->sizePerPool = sizePerPool;

            Pool pool(sizePerPool);

            pools.emplace_back(pool);
        }

        inline const char* GetString(uint64_t hash)
        {
            for (const auto& data : poolDatas)
            {
                if (data.hash == hash)
                {
                    return data.ptr;
                }
            }

            return nullptr;
        }

        inline const char* AddString(char* string, size_t size)
        {
            if (string == nullptr || size == 0)
                return nullptr;

            auto hash = XXH64(string, size, SeedHash);

            auto existing = GetString(hash);

            if (existing != nullptr)
            {
                return existing;
            }

            PoolItemMetadata metadata{};
            metadata.hash = hash;
            for (auto& pool : pools)
            {
                if (pool.AddString(string, size, metadata))
                {
                    poolDatas.emplace_back(metadata);

                    return metadata.ptr;
                }
            }

            // all pools are full, lets make new one
            Pool pool(this->sizePerPool);

            auto& addedPool = pools.emplace_back(pool);

            if (addedPool.AddString(string, size, metadata))
            {
                poolDatas.emplace_back(metadata);

                return metadata.ptr;
            }

            return nullptr; // something terrible happened
        }

        inline const char* AddString(const char* string, size_t size)
        {
            return AddString((char*)string, size);
        }

        inline const char* AddString(std::string_view string)
        {
            return AddString(string.data(), string.size());
        }
    };

} // namespace montys
