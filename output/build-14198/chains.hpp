/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 201
/*  Dumped At       : 21:05 18/11/2026 (GMT)
/*  Dumped In       : 57,3s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Build 14197 engine pointer chains.
/*  Values are byte offsets. Validate the unverified ones live.
*/
#pragma once
#include <cstdint>

namespace cs2::chains {
    inline constexpr std::uint32_t build = 14197;

    namespace entity {
        inline constexpr std::uint32_t identity = 0x10;
        inline constexpr std::uint32_t name_flags = 0x14;
        inline constexpr std::uint32_t name = 0x18;
        inline constexpr std::uint32_t entity_class = 0x8;
    }

    namespace entity_list {
        inline constexpr std::uint32_t chunk_table = 0x10;
        inline constexpr std::uint32_t chunk_stride = 8;
        inline constexpr std::uint32_t chunk_shift = 9;
        inline constexpr std::uint32_t index_mask = 0x1FF;
        inline constexpr std::uint32_t entry_stride = 0x70;
        inline constexpr std::uint32_t entity_pointer = 0x0;
        inline constexpr std::uint32_t handle = 0x10;
        inline constexpr std::uint32_t get_by_index = 0x9F1300;
    }

    namespace schema {
        inline constexpr std::uint32_t class_info = 0x58;
        inline constexpr std::uint32_t class_name = 0x8;
        inline constexpr std::uint32_t class_name_fn = 0xB64160; // edx = entity index
    }
}