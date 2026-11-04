/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod resourcesystem {

    pub type NoiseStreamModifier_t = i32;
    pub type NoiseStreamTurbulence_t = i32;
    pub type NoiseStreamType_t = i32;
    pub type FuseVariableType_t = i32;
    pub type FuseVariableAccess_t = i32;
    #[repr(C)]
    pub struct InfoForResourceTypeCResponseRulesList {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct AABBWS_t {
        pub m_vMinBounds: [u8; 0xC], // 0x0
        pub m_vMaxBounds: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCDotaItemDefinitionResource {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCMorphSetData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVSoundStackScriptList {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct PackedAABB_t {
        pub m_nPackedMin: [u8; 0x4], // 0x0
        pub m_nPackedMax: [u8; 0x4], // 0x4
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVPhysXSurfacePropertiesList {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeManifestTestResource_t {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct ConstantInfo_t {
        pub m_name: [u8; 0x8], // 0x0
        pub m_nameToken: [u8; 0x4], // 0x8
        pub m_flValue: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct FuseFunctionIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCGcExportableExternalData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeIAnimGraphModelBinding {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCJavaScriptResource {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CFuseSymbolTable {
        pub m_constants: [u8; 0x18], // 0x0
        pub m_variables: [u8; 0x18], // 0x18
        pub m_functions: [u8; 0x18], // 0x30
        pub m_constantMap: [u8; 0x20], // 0x48
        pub m_variableMap: [u8; 0x20], // 0x68
        pub m_functionMap: [u8; 0x28], // 0x88
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCRenderMesh {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVoxelVisibility {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeISmartProp {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCPhysAggregateData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCNmClip {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeWorld_t {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeProceduralTestResource_t {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct AABB_t {
        pub m_vMinBounds: [u8; 0xC], // 0x0
        pub m_vMaxBounds: [u8; 0xC], // 0xC
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCPostProcessingResource {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct VariableInfo_t {
        pub m_name: [u8; 0x8], // 0x0
        pub m_nameToken: [u8; 0x4], // 0x8
        pub m_nIndex: [u8; 0x2], // 0xC
        pub m_nNumComponents: [u8; 0x1], // 0xE
        pub m_eVarType: [u8; 0x1], // 0xF
        pub m_eAccess: [u8; 0x8], // 0x10
    }
    #[repr(C)]
    pub struct InfoForResourceTypeIParticleSnapshot {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct FourQuaternions {
        pub x: [u8; 0x10], // 0x0
        pub y: [u8; 0x10], // 0x10
        pub z: [u8; 0x10], // 0x20
        pub w: [u8; 0x10], // 0x30
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCPanoramaLayout {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCTypeScriptResource {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCChoreoSceneResource {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCNmSkeleton {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCTestResourceData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCAnimationGroup {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVSoundEventScriptList {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVoiceContainerBase {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCPanoramaStyle {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCWorldNode {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCSurfaceGraph {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCCSGOEconItem {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCNmGraphDefinition {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct CFuseProgram {
        pub m_programBuffer: [u8; 0x18], // 0x0
        pub m_variablesRead: [u8; 0x18], // 0x18
        pub m_variablesWritten: [u8; 0x18], // 0x30
        pub m_nMaxTempVarsUsed: [u8; 0x8], // 0x48
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCCompositeMaterialKit {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCAnimData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeIMaterial2 {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVDSPResource {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeIVectorGraphic {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCPanoramaDynamicImages {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeIPulseGraphDef {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVDataItemDefs {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct FunctionInfo_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_name: [u8; 0x8], // 0x8
        pub m_nameToken: [u8; 0x4], // 0x10
        pub m_nParamCount: [u8; 0x4], // 0x14
        pub m_nIndex: [u8; 0x2], // 0x18
        pub m_bIsPure: [u8; 0x6], // 0x1A
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCVDataResource {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct NoiseOscillatorDef_t {
        pub m_flPhase: [u8; 0x4], // 0x0
        pub m_flFrequency: [u8; 0x4], // 0x4
        pub m_flAmplitude: [u8; 0x4], // 0x8
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCModel {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCDOTANovelsList {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct NoiseStreamDef_t {
        pub m_nType: [u8; 0x4], // 0x0
        pub m_nModifier: [u8; 0x4], // 0x4
        pub m_nTurbulence: [u8; 0x4], // 0x8
        pub m_flOutputMin: [u8; 0x4], // 0xC
        pub m_flOutputMax: [u8; 0x4], // 0x10
        pub m_flScale: [u8; 0x4], // 0x14
        pub m_vOffsetRate: [u8; 0xC], // 0x18
        pub m_flOffset: [u8; 0x4], // 0x24
        pub m_nOctaves: [u8; 0x4], // 0x28
        pub m_flTurbulenceScale: [u8; 0x4], // 0x2C
        pub m_flTurbulenceMix: [u8; 0x8], // 0x30
        pub m_Oscillators: [u8; 0x18], // 0x38
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCTextureBase {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct FuseVariableIndex_t {
        pub m_Value: [u8; 0x2], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeIParticleSystemDefinition {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCSequenceGroupData {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct ManifestTestResource_t {
        pub m_name: [u8; 0x8], // 0x0
        pub m_child: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCEntityLump {
        pub pad_0: [u8; 0x1], // 0x0
    }
    #[repr(C)]
    pub struct InfoForResourceTypeCDOTAPatchNotesList {
        pub pad_0: [u8; 0x1], // 0x0
    }
}
