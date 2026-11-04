/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Total Offsets   : 202
/*  Dumped At       : 22:59 04/11/2026 (GMT)
/*  Dumped In       : 1,7s
*/

/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#pragma once
#include <cstddef>
#include <cstdint>

namespace cs2::resourcesystem_dll {

enum class NoiseStreamModifier_t : std::int32_t {
    NOISE_STREAM_MODIFIER_NONE = 0,
    NOISE_STREAM_MODIFIER_LINES = 1,
    NOISE_STREAM_MODIFIER_CLUMPS = 2,
    NOISE_STREAM_MODIFIER_RINGS = 3,
};

enum class NoiseStreamTurbulence_t : std::int32_t {
    NOISE_STREAM_TURB_NONE = 0,
    NOISE_STREAM_TURB_HIGHLIGHT = 1,
    NOISE_STREAM_TURB_FEEDBACK = 2,
    NOISE_STREAM_TURB_LOOPY = 3,
    NOISE_STREAM_TURB_CONTRAST = 4,
    NOISE_STREAM_TURB_ALTERNATE = 5,
};

enum class NoiseStreamType_t : std::int32_t {
    NOISE_STREAM_TYPE_PERLIN = 0,
    NOISE_STREAM_TYPE_SIMPLEX = 1,
    NOISE_STREAM_TYPE_WORLEY = 2,
    NOISE_STREAM_TYPE_CURL = 3,
    NOISE_STREAM_TYPE_NONE = 4,
};

enum class FuseVariableType_t : std::int32_t {
    INVALID = 0,
    BOOL = 1,
    INT8 = 2,
    INT16 = 3,
    INT32 = 4,
    UINT8 = 5,
    UINT16 = 6,
    UINT32 = 7,
    FLOAT32 = 8,
};

enum class FuseVariableAccess_t : std::int32_t {
    WRITABLE = 0,
    READ_ONLY = 1,
};

struct InfoForResourceTypeCResponseRulesList {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct AABBWS_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
};

struct InfoForResourceTypeCDotaItemDefinitionResource {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCMorphSetData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCVSoundStackScriptList {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct PackedAABB_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
};

struct InfoForResourceTypeCVPhysXSurfacePropertiesList {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeManifestTestResource_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct ConstantInfo_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
};

struct FuseFunctionIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct InfoForResourceTypeCGcExportableExternalData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeIAnimGraphModelBinding {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCJavaScriptResource {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CFuseSymbolTable {
    static constexpr std::size_t size = 0xb0;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x20]; // 0x48 
    std::uint8_t _[0x20]; // 0x68 
    std::uint8_t _[0x28]; // 0x88 
};

struct InfoForResourceTypeCRenderMesh {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCVoxelVisibility {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeISmartProp {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCPhysAggregateData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCNmClip {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeWorld_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeProceduralTestResource_t {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct AABB_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0xc]; // 0x0 
    std::uint8_t _[0xc]; // 0xc 
};

struct InfoForResourceTypeCPostProcessingResource {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct VariableInfo_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x2]; // 0xc 
    std::uint8_t _[0x1]; // 0xe 
    std::uint8_t _[0x1]; // 0xf 
    std::uint8_t _[0x8]; // 0x10 
};

struct InfoForResourceTypeIParticleSnapshot {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct FourQuaternions {
    static constexpr std::size_t size = 0x40;
    std::uint8_t _[0x10]; // 0x0 
    std::uint8_t _[0x10]; // 0x10 
    std::uint8_t _[0x10]; // 0x20 
    std::uint8_t _[0x10]; // 0x30 
};

struct InfoForResourceTypeCPanoramaLayout {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCTypeScriptResource {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCChoreoSceneResource {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCNmSkeleton {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCTestResourceData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCAnimationGroup {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCVSoundEventScriptList {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCVoiceContainerBase {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCPanoramaStyle {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCWorldNode {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCSurfaceGraph {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCCSGOEconItem {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCNmGraphDefinition {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct CFuseProgram {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x18]; // 0x0 
    std::uint8_t _[0x18]; // 0x18 
    std::uint8_t _[0x18]; // 0x30 
    std::uint8_t _[0x8]; // 0x48 
};

struct InfoForResourceTypeCCompositeMaterialKit {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCAnimData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeIMaterial2 {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCVDSPResource {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeIVectorGraphic {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCPanoramaDynamicImages {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeIPulseGraphDef {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCVDataItemDefs {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct FunctionInfo_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t _[0x8]; // 0x8 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0x2]; // 0x18 
    std::uint8_t _[0x6]; // 0x1a 
};

struct InfoForResourceTypeCVDataResource {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct NoiseOscillatorDef_t {
    static constexpr std::size_t size = 0xc;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
};

struct InfoForResourceTypeCModel {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCDOTANovelsList {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct NoiseStreamDef_t {
    static constexpr std::size_t size = 0x50;
    std::uint8_t _[0x4]; // 0x0 
    std::uint8_t _[0x4]; // 0x4 
    std::uint8_t _[0x4]; // 0x8 
    std::uint8_t _[0x4]; // 0xc 
    std::uint8_t _[0x4]; // 0x10 
    std::uint8_t _[0x4]; // 0x14 
    std::uint8_t _[0xc]; // 0x18 
    std::uint8_t _[0x4]; // 0x24 
    std::uint8_t _[0x4]; // 0x28 
    std::uint8_t _[0x4]; // 0x2c 
    std::uint8_t _[0x8]; // 0x30 
    std::uint8_t _[0x18]; // 0x38 
};

struct InfoForResourceTypeCTextureBase {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct FuseVariableIndex_t {
    static constexpr std::size_t size = 0x2;
    std::uint8_t _[0x2]; // 0x0 
};

struct InfoForResourceTypeIParticleSystemDefinition {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCSequenceGroupData {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct ManifestTestResource_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t _[0x8]; // 0x0 
    std::uint8_t _[0x8]; // 0x8 
};

struct InfoForResourceTypeCEntityLump {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

struct InfoForResourceTypeCDOTAPatchNotesList {
    static constexpr std::size_t size = 0x1;
    std::uint8_t pad_0[0x1]; // 0x0
};

} // namespace