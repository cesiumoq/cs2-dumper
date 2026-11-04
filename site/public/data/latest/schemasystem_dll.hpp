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

namespace cs2::schemasystem {

enum class fieldtype_t : std::int32_t {
    FIELD_VOID = 0,
    FIELD_FLOAT32 = 1,
    FIELD_STRING = 2,
    FIELD_VECTOR = 3,
    FIELD_QUATERNION = 4,
    FIELD_INT32 = 5,
    FIELD_BOOLEAN = 6,
    FIELD_INT16 = 7,
    FIELD_CHARACTER = 8,
    FIELD_COLOR32 = 9,
    FIELD_EMBEDDED = 10,
    FIELD_CUSTOM = 11,
    FIELD_CLASSPTR = 12,
    FIELD_EHANDLE = 13,
    FIELD_POSITION_VECTOR = 14,
    FIELD_TIME = 15,
    FIELD_TICK = 16,
    FIELD_SOUNDNAME = 17,
    FIELD_INPUT = 18,
    FIELD_FUNCTION = 19,
    FIELD_VMATRIX = 20,
    FIELD_VMATRIX_WORLDSPACE = 21,
    FIELD_MATRIX3X4_WORLDSPACE = 22,
    FIELD_INTERVAL = 23,
    FIELD_UNUSED = 24,
    FIELD_VECTOR2D = 25,
    FIELD_INT64 = 26,
    FIELD_VECTOR4D = 27,
    FIELD_RESOURCE = 28,
    FIELD_TYPEUNKNOWN = 29,
    FIELD_CSTRING = 30,
    FIELD_HSCRIPT = 31,
    FIELD_VARIANT = 32,
    FIELD_UINT64 = 33,
    FIELD_FLOAT64 = 34,
    FIELD_POSITIVEINTEGER_OR_NULL = 35,
    FIELD_HSCRIPT_NEW_INSTANCE = 36,
    FIELD_UINT32 = 37,
    FIELD_UTLSTRINGTOKEN = 38,
    FIELD_QANGLE = 39,
    FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTOR = 40,
    FIELD_HMATERIAL = 41,
    FIELD_HMODEL = 42,
    FIELD_NETWORK_QUANTIZED_VECTOR = 43,
    FIELD_NETWORK_QUANTIZED_FLOAT = 44,
    FIELD_DIRECTION_VECTOR_WORLDSPACE = 45,
    FIELD_QANGLE_WORLDSPACE = 46,
    FIELD_QUATERNION_WORLDSPACE = 47,
    FIELD_HSCRIPT_LIGHTBINDING = 48,
    FIELD_V8_VALUE = 49,
    FIELD_V8_OBJECT = 50,
    FIELD_V8_ARRAY = 51,
    FIELD_V8_CALLBACK_INFO = 52,
    FIELD_UTLSTRING = 53,
    FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_POSITION_VECTOR = 54,
    FIELD_HRENDERTEXTURE = 55,
    FIELD_HPARTICLESYSTEMDEFINITION = 56,
    FIELD_UINT8 = 57,
    FIELD_UINT16 = 58,
    FIELD_CTRANSFORM = 59,
    FIELD_CTRANSFORM_WORLDSPACE = 60,
    FIELD_HPOSTPROCESSING = 61,
    FIELD_MATRIX3X4 = 62,
    FIELD_SHIM = 63,
    FIELD_CMOTIONTRANSFORM = 64,
    FIELD_CMOTIONTRANSFORM_WORLDSPACE = 65,
    FIELD_ATTACHMENT_HANDLE = 66,
    FIELD_AMMO_INDEX = 67,
    FIELD_CONDITION_ID = 68,
    DEPRECATED_FIELD_AI_SCHEDULE_BITS = 69,
    FIELD_MODIFIER_HANDLE = 70,
    FIELD_ROTATION_VECTOR = 71,
    FIELD_ROTATION_VECTOR_WORLDSPACE = 72,
    FIELD_HVDATA = 73,
    FIELD_SCALE32 = 74,
    FIELD_STRING_AND_TOKEN = 75,
    FIELD_ENGINE_TIME = 76,
    FIELD_ENGINE_TICK = 77,
    FIELD_WORLD_GROUP_ID = 78,
    FIELD_GLOBALSYMBOL = 79,
    FIELD_HNMGRAPHDEFINITION = 80,
    FIELD_NETWORK_QUANTIZED_VECTORWS = 81,
    FIELD_NETWORK_ORIGIN_CELL_QUANTIZED_VECTORWS = 82,
    FIELD_TYPECOUNT = 83,
};

enum class ThreeState_t : std::int32_t {
    TRS_FALSE = 0,
    TRS_TRUE = 1,
    TRS_NONE = 2,
};

struct InfoForResourceTypeCResourceManifestInternal {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CSchemaSystemInternalRegistration {
    static constexpr std::size_t size = 0x180;
    std::uint8_t m_Vector2D[0x8]; // 0x0 Vector2D
    std::uint8_t m_Vector[0xC]; // 0x8 Vector
    std::uint8_t m_VectorWS[0xC]; // 0x14 VectorWS
    std::uint8_t m_VectorAligned[0x10]; // 0x20 VectorAligned
    std::uint8_t m_Quaternion[0x10]; // 0x30 Quaternion
    std::uint8_t m_QAngle[0xC]; // 0x40 QAngle
    std::uint8_t m_RotationVector[0xC]; // 0x4C RotationVector
    std::uint8_t m_RadianEuler[0xC]; // 0x58 RadianEuler
    std::uint8_t m_DegreeEuler[0xC]; // 0x64 DegreeEuler
    std::uint8_t m_QuaternionStorage[0x10]; // 0x70 QuaternionStorage
    std::uint8_t m_matrix3x4_t[0x30]; // 0x80 matrix3x4_t
    std::uint8_t m_matrix3x4a_t[0x30]; // 0xB0 matrix3x4a_t
    std::uint8_t m_Color[0x4]; // 0xE0 Color
    std::uint8_t m_Vector4D[0x1C]; // 0xE4 Vector4D
    std::uint8_t m_CTransform[0x20]; // 0x100 CTransform
    std::uint8_t m_pKeyValues[0x8]; // 0x120 KeyValues*
    std::uint8_t m_CUtlBinaryBlock[0x10]; // 0x128 CUtlBinaryBlock
    std::uint8_t m_CUtlString[0x8]; // 0x138 CUtlString
    std::uint8_t m_CUtlSymbol[0x4]; // 0x140 CUtlSymbol
    std::uint8_t m_stringToken[0x4]; // 0x144 CUtlStringToken
    std::uint8_t m_stringTokenWithStorage[0x18]; // 0x148 CUtlStringTokenWithStorage
    std::uint8_t m_ResourceTypes[0x8]; // 0x160 CResourceArray<CResourcePointer<CResourceString>>
    std::uint8_t m_KV3[0x18]; // 0x168 KeyValues3
};

struct CExampleSchemaVData_PolymorphicDerivedA {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nDerivedA[0x8]; // 0x10 int32
};

struct CExampleSchemaVData_PolymorphicBase {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nBase[0x8]; // 0x8 int32
};

struct CExampleSchemaVData_PolymorphicDerivedB {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x10]; // 0x0
    std::uint8_t m_nDerivedB[0x8]; // 0x10 int32
};

struct ResourceId_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_Value[0x8]; // 0x0 uint64
};

struct CExampleSchemaVData_Monomorphic {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_nExample1[0x4]; // 0x0 int32
    std::uint8_t m_nExample2[0x4]; // 0x4 int32
};

} // namespace