/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 01:05 03/11/2026 (GMT)
/*  Dumped In       : 2,7s
*/

/*
   module:        host.dll
   classes:       2
   enums:         0
   generated_at:  2026-11-02T23:19:40.149674800+00:00
   Use:
*/
//   auto* pawn = reinterpret_cast<C_CSPlayerPawn*>(addr);
//   pawn->m_iHealth() = 100;

#pragma once
#include "../macros.hpp"

namespace host {

    class EmptyTestScript;
    class CAnimScriptBase;

    // CAnimScriptBase
/*
   fields: 1
   size: 0x10
*/
    class CAnimScriptBase {
    public:
        SCHEMA_FIELD(bool                            , m_bIsValid                                      , 0x8) // bool
    };

    // EmptyTestScript
/*
   fields: 1
   size: 0x20
*/
    class EmptyTestScript {
    public:
        SCHEMA_FIELD(CAnimScriptParam<float32>       , m_hTest                                         , 0x10) // CAnimScriptParam<float32>
    };

} // namespace host