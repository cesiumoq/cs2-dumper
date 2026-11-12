#pragma once
#include "../macros.hpp"

namespace host {

    class EmptyTestScript;
    class CAnimScriptBase;

    // EmptyTestScript
    //   fields: 1
    //   size: 0x20
    class EmptyTestScript {
    public:
        SCHEMA_FIELD(CAnimScriptParam<float32>       , m_hTest                                         , 0x10) // CAnimScriptParam<float32>
    };

    // CAnimScriptBase
    //   fields: 1
    //   size: 0x10
    class CAnimScriptBase {
    public:
        SCHEMA_FIELD(bool                            , m_bIsValid                                      , 0x8) // bool
    };

} // namespace host