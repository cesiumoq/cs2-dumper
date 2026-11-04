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

using System;
using System.Runtime.InteropServices;

namespace Cs2.resourcesystem {

    public enum NoiseStreamModifier_t : int {
        NOISE_STREAM_MODIFIER_NONE = 0, 
        NOISE_STREAM_MODIFIER_LINES = 1, 
        NOISE_STREAM_MODIFIER_CLUMPS = 2, 
        NOISE_STREAM_MODIFIER_RINGS = 3, 
    }
    public enum NoiseStreamTurbulence_t : int {
        NOISE_STREAM_TURB_NONE = 0, 
        NOISE_STREAM_TURB_HIGHLIGHT = 1, 
        NOISE_STREAM_TURB_FEEDBACK = 2, 
        NOISE_STREAM_TURB_LOOPY = 3, 
        NOISE_STREAM_TURB_CONTRAST = 4, 
        NOISE_STREAM_TURB_ALTERNATE = 5, 
    }
    public enum NoiseStreamType_t : int {
        NOISE_STREAM_TYPE_PERLIN = 0, 
        NOISE_STREAM_TYPE_SIMPLEX = 1, 
        NOISE_STREAM_TYPE_WORLEY = 2, 
        NOISE_STREAM_TYPE_CURL = 3, 
        NOISE_STREAM_TYPE_NONE = 4, 
    }
    public enum FuseVariableType_t : int {
        INVALID = 0, 
        BOOL = 1, 
        INT8 = 2, 
        INT16 = 3, 
        INT32 = 4, 
        UINT8 = 5, 
        UINT16 = 6, 
        UINT32 = 7, 
        FLOAT32 = 8, 
    }
    public enum FuseVariableAccess_t : int {
        WRITABLE = 0, 
        READ_ONLY = 1, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCResponseRulesList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct AABBWS_t {
        [FieldOffset(0x0)] public fixed byte m_vMinBounds[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMaxBounds[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCDotaItemDefinitionResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCMorphSetData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVSoundStackScriptList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct PackedAABB_t {
        [FieldOffset(0x0)] public fixed byte m_nPackedMin[0x4];
        [FieldOffset(0x4)] public fixed byte m_nPackedMax[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVPhysXSurfacePropertiesList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeManifestTestResource_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ConstantInfo_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_nameToken[0x4];
        [FieldOffset(0xC)] public fixed byte m_flValue[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct FuseFunctionIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCGcExportableExternalData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeIAnimGraphModelBinding {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCJavaScriptResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xB0)]
    public unsafe struct CFuseSymbolTable {
        [FieldOffset(0x0)] public fixed byte m_constants[0x18];
        [FieldOffset(0x18)] public fixed byte m_variables[0x18];
        [FieldOffset(0x30)] public fixed byte m_functions[0x18];
        [FieldOffset(0x48)] public fixed byte m_constantMap[0x20];
        [FieldOffset(0x68)] public fixed byte m_variableMap[0x20];
        [FieldOffset(0x88)] public fixed byte m_functionMap[0x28];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCRenderMesh {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVoxelVisibility {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeISmartProp {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCPhysAggregateData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCNmClip {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeWorld_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeProceduralTestResource_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct AABB_t {
        [FieldOffset(0x0)] public fixed byte m_vMinBounds[0xC];
        [FieldOffset(0xC)] public fixed byte m_vMaxBounds[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCPostProcessingResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct VariableInfo_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_nameToken[0x4];
        [FieldOffset(0xC)] public fixed byte m_nIndex[0x2];
        [FieldOffset(0xE)] public fixed byte m_nNumComponents[0x1];
        [FieldOffset(0xF)] public fixed byte m_eVarType[0x1];
        [FieldOffset(0x10)] public fixed byte m_eAccess[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeIParticleSnapshot {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x40)]
    public unsafe struct FourQuaternions {
        [FieldOffset(0x0)] public fixed byte x[0x10];
        [FieldOffset(0x10)] public fixed byte y[0x10];
        [FieldOffset(0x20)] public fixed byte z[0x10];
        [FieldOffset(0x30)] public fixed byte w[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCPanoramaLayout {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCTypeScriptResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCChoreoSceneResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCNmSkeleton {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCTestResourceData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCAnimationGroup {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVSoundEventScriptList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVoiceContainerBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCPanoramaStyle {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCWorldNode {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCSurfaceGraph {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCCSGOEconItem {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCNmGraphDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct CFuseProgram {
        [FieldOffset(0x0)] public fixed byte m_programBuffer[0x18];
        [FieldOffset(0x18)] public fixed byte m_variablesRead[0x18];
        [FieldOffset(0x30)] public fixed byte m_variablesWritten[0x18];
        [FieldOffset(0x48)] public fixed byte m_nMaxTempVarsUsed[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCCompositeMaterialKit {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCAnimData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeIMaterial2 {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVDSPResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeIVectorGraphic {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCPanoramaDynamicImages {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeIPulseGraphDef {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVDataItemDefs {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct FunctionInfo_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_name[0x8];
        [FieldOffset(0x10)] public fixed byte m_nameToken[0x4];
        [FieldOffset(0x14)] public fixed byte m_nParamCount[0x4];
        [FieldOffset(0x18)] public fixed byte m_nIndex[0x2];
        [FieldOffset(0x1A)] public fixed byte m_bIsPure[0x6];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCVDataResource {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0xC)]
    public unsafe struct NoiseOscillatorDef_t {
        [FieldOffset(0x0)] public fixed byte m_flPhase[0x4];
        [FieldOffset(0x4)] public fixed byte m_flFrequency[0x4];
        [FieldOffset(0x8)] public fixed byte m_flAmplitude[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCModel {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCDOTANovelsList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x50)]
    public unsafe struct NoiseStreamDef_t {
        [FieldOffset(0x0)] public fixed byte m_nType[0x4];
        [FieldOffset(0x4)] public fixed byte m_nModifier[0x4];
        [FieldOffset(0x8)] public fixed byte m_nTurbulence[0x4];
        [FieldOffset(0xC)] public fixed byte m_flOutputMin[0x4];
        [FieldOffset(0x10)] public fixed byte m_flOutputMax[0x4];
        [FieldOffset(0x14)] public fixed byte m_flScale[0x4];
        [FieldOffset(0x18)] public fixed byte m_vOffsetRate[0xC];
        [FieldOffset(0x24)] public fixed byte m_flOffset[0x4];
        [FieldOffset(0x28)] public fixed byte m_nOctaves[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flTurbulenceScale[0x4];
        [FieldOffset(0x30)] public fixed byte m_flTurbulenceMix[0x8];
        [FieldOffset(0x38)] public fixed byte m_Oscillators[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCTextureBase {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x2)]
    public unsafe struct FuseVariableIndex_t {
        [FieldOffset(0x0)] public fixed byte m_Value[0x2];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeIParticleSystemDefinition {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCSequenceGroupData {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct ManifestTestResource_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
        [FieldOffset(0x8)] public fixed byte m_child[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCEntityLump {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x1)]
    public unsafe struct InfoForResourceTypeCDOTAPatchNotesList {
        [FieldOffset(0x0)] public fixed byte pad_0[0x1];
    }
}