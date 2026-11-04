#pragma once
#include "../macros.hpp"

namespace networksystem {

    class ChangeAccessorFieldPathIndex_t;

    // ChangeAccessorFieldPathIndex_t
    //   fields: 1
    //   size: 0x4
    class ChangeAccessorFieldPathIndex_t {
    public:
        SCHEMA_FIELD(std::int32_t                    , m_Value                                         , 0x0) // int32
    };

} // namespace networksystem