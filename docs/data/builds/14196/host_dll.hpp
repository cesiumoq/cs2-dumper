/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 13:00 05/11/2026 (GMT)
/*  Dumped In       : 1,2s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::host_dll {

struct EmptyTestScript {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t _[0x10]; // 0x10 
};

struct CAnimScriptBase {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
};

} // namespace