/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:50 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::host {

struct EmptyTestScript {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_hTest[0x10]; // 0x10 CAnimScriptParam<float32>
};

struct CAnimScriptBase {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_bIsValid[0x8]; // 0x8 bool
};

} // namespace