/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const schemasystem = struct {

    pub const InfoForResourceTypeCResourceManifestInternal = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CSchemaSystemInternalRegistration = extern struct {
        m_Vector2D: [0x8]u8, // 0x0
        m_Vector: [0xC]u8, // 0x8
        m_VectorWS: [0xC]u8, // 0x14
        m_VectorAligned: [0x10]u8, // 0x20
        m_Quaternion: [0x10]u8, // 0x30
        m_QAngle: [0xC]u8, // 0x40
        m_RotationVector: [0xC]u8, // 0x4C
        m_RadianEuler: [0xC]u8, // 0x58
        m_DegreeEuler: [0xC]u8, // 0x64
        m_QuaternionStorage: [0x10]u8, // 0x70
        m_matrix3x4_t: [0x30]u8, // 0x80
        m_matrix3x4a_t: [0x30]u8, // 0xB0
        m_Color: [0x4]u8, // 0xE0
        m_Vector4D: [0x1C]u8, // 0xE4
        m_CTransform: [0x20]u8, // 0x100
        m_pKeyValues: [0x8]u8, // 0x120
        m_CUtlBinaryBlock: [0x10]u8, // 0x128
        m_CUtlString: [0x8]u8, // 0x138
        m_CUtlSymbol: [0x4]u8, // 0x140
        m_stringToken: [0x4]u8, // 0x144
        m_stringTokenWithStorage: [0x18]u8, // 0x148
        m_ResourceTypes: [0x8]u8, // 0x160
        m_KV3: [0x18]u8, // 0x168
    };
    pub const CExampleSchemaVData_PolymorphicDerivedA = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nDerivedA: [0x8]u8, // 0x10
    };
    pub const CExampleSchemaVData_PolymorphicBase = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nBase: [0x8]u8, // 0x8
    };
    pub const CExampleSchemaVData_PolymorphicDerivedB = extern struct {
        pad_0: [0x10]u8, // 0x0
        m_nDerivedB: [0x8]u8, // 0x10
    };
    pub const ResourceId_t = extern struct {
        m_Value: [0x8]u8, // 0x0
    };
    pub const CExampleSchemaVData_Monomorphic = extern struct {
        m_nExample1: [0x4]u8, // 0x0
        m_nExample2: [0x4]u8, // 0x4
    };
};
