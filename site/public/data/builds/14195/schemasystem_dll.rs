/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod schemasystem {

    pub type fieldtype_t = i32;
    pub type ThreeState_t = i32;
    #[repr(C)]
    pub struct InfoForResourceTypeCResourceManifestInternal {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CSchemaSystemInternalRegistration {
        pub m_Vector2D: [u8; 0x8], // 0x0
        pub m_Vector: [u8; 0xC], // 0x8
        pub m_VectorWS: [u8; 0xC], // 0x14
        pub m_VectorAligned: [u8; 0x10], // 0x20
        pub m_Quaternion: [u8; 0x10], // 0x30
        pub m_QAngle: [u8; 0xC], // 0x40
        pub m_RotationVector: [u8; 0xC], // 0x4C
        pub m_RadianEuler: [u8; 0xC], // 0x58
        pub m_DegreeEuler: [u8; 0xC], // 0x64
        pub m_QuaternionStorage: [u8; 0x10], // 0x70
        pub m_matrix3x4_t: [u8; 0x30], // 0x80
        pub m_matrix3x4a_t: [u8; 0x30], // 0xB0
        pub m_Color: [u8; 0x4], // 0xE0
        pub m_Vector4D: [u8; 0x1C], // 0xE4
        pub m_CTransform: [u8; 0x20], // 0x100
        pub m_pKeyValues: [u8; 0x8], // 0x120
        pub m_CUtlBinaryBlock: [u8; 0x10], // 0x128
        pub m_CUtlString: [u8; 0x8], // 0x138
        pub m_CUtlSymbol: [u8; 0x4], // 0x140
        pub m_stringToken: [u8; 0x4], // 0x144
        pub m_stringTokenWithStorage: [u8; 0x18], // 0x148
        pub m_ResourceTypes: [u8; 0x8], // 0x160
        pub m_KV3: [u8; 0x18], // 0x168
    }
    #[repr(C)]
    pub struct CExampleSchemaVData_PolymorphicDerivedA {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nDerivedA: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct CExampleSchemaVData_PolymorphicBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nBase: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct CExampleSchemaVData_PolymorphicDerivedB {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_nDerivedB: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct ResourceId_t {
        pub m_Value: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct CExampleSchemaVData_Monomorphic {
        pub m_nExample1: [u8; 0x4], // 0x0
        pub m_nExample2: [u8; 0x4], // 0x4
    }
}
