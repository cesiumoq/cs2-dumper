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

namespace cs2::panorama {

enum class ELayoutNodeType : std::int32_t {
    ROOT = 0,
    STYLES = 1,
    SCRIPT_BODY = 2,
    SCRIPTS = 3,
    SNIPPETS = 4,
    INCLUDE = 5,
    SNIPPET = 6,
    PANEL = 7,
    PANEL_ATTRIBUTE = 8,
    PANEL_ATTRIBUTE_VALUE = 9,
    REFERENCE_CONTENT = 10,
    REFERENCE_COMPILED = 11,
    REFERENCE_PASSTHROUGH = 12,
};

enum class EStyleNodeType : std::int32_t {
    ROOT = 0,
    EXPRESSION = 1,
    PROPERTY = 2,
    DEFINE = 3,
    IMPORT = 4,
    KEYFRAMES = 5,
    KEYFRAME_SELECTOR = 6,
    STYLE_SELECTOR = 7,
    WHITESPACE = 8,
    EXPRESSION_TEXT = 9,
    EXPRESSION_URL = 10,
    EXPRESSION_CONCAT = 11,
    REFERENCE_CONTENT = 12,
    REFERENCE_COMPILED = 13,
    REFERENCE_PASSTHROUGH = 14,
    REFERENCE_PANEL = 15,
    COMPILER_CONDITIONAL = 16,
};

} // namespace