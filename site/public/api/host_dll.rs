/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod host {

    #[repr(C)]
    pub struct EmptyTestScript {
        pub pad_0: [u8; 0x10], // 0x0
        pub m_hTest: [u8; 0x10], // 0x10
    }
    #[repr(C)]
    pub struct CAnimScriptBase {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_bIsValid: [u8; 0x8], // 0x8
    }
}
