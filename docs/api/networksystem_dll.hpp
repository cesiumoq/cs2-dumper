/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 12:48 03/11/2026 (GMT)
/*  Dumped In       : 4,9s
*/

/*
   module:        networksystem.dll
   classes:       1
   enums:         0
   generated_at:  2026-11-03T12:42:04.450834200+00:00
   Use:
*/
//   auto* pawn = reinterpret_cast<C_CSPlayerPawn*>(addr);
//   pawn->m_iHealth() = 100;

#pragma once
#include "../macros.hpp"

namespace networksystem {

    class ChangeAccessorFieldPathIndex_t;

    // ChangeAccessorFieldPathIndex_t
/*
   fields: 1
   size: 0x4
*/
    class ChangeAccessorFieldPathIndex_t {
    public:
        SCHEMA_FIELD(std::int32_t                    , m_Value                                         , 0x0) // int32
    };

} // namespace networksystem