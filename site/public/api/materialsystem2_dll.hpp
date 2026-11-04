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

namespace cs2::materialsystem2 {

enum class VertJustification_e : std::int32_t {
    VERT_JUSTIFICATION_TOP = 0,
    VERT_JUSTIFICATION_CENTER = 1,
    VERT_JUSTIFICATION_BOTTOM = 2,
    VERT_JUSTIFICATION_NONE = 3,
};

enum class LayoutPositionType_e : std::int32_t {
    LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0,
    LAYOUTPOSITIONTYPE_FRACTIONAL = 1,
    LAYOUTPOSITIONTYPE_NONE = 2,
};

enum class ViewFadeMode_t : std::int32_t {
    VIEW_FADE_CONSTANT_COLOR = 0,
    VIEW_FADE_MODULATE = 1,
    VIEW_FADE_MOD2X = 2,
};

enum class BloomBlendMode_t : std::int32_t {
    BLOOM_BLEND_ADD = 0,
    BLOOM_BLEND_SCREEN = 1,
    BLOOM_BLEND_BLUR = 2,
};

enum class HorizJustification_e : std::int32_t {
    HORIZ_JUSTIFICATION_LEFT = 0,
    HORIZ_JUSTIFICATION_CENTER = 1,
    HORIZ_JUSTIFICATION_RIGHT = 2,
    HORIZ_JUSTIFICATION_NONE = 3,
};

struct MaterialParam_t {
    static constexpr std::size_t size = 0x8;
    std::uint8_t m_name[0x8]; // 0x0 CUtlString
};

struct MaterialParamVector_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_value[0x10]; // 0x8 Vector4D
};

struct MaterialParamString_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_value[0x8]; // 0x8 CUtlString
};

struct PostProcessingResource_t {
    static constexpr std::size_t size = 0x158;
    std::uint8_t m_bHasTonemapParams[0x4]; // 0x0 bool
    std::uint8_t m_toneMapParams[0x3C]; // 0x4 PostProcessingTonemapParameters_t
    std::uint8_t m_bHasBloomParams[0x4]; // 0x40 bool
    std::uint8_t m_bloomParams[0x88]; // 0x44 PostProcessingBloomParameters_t
    std::uint8_t m_bHasVignetteParams[0x4]; // 0xCC bool
    std::uint8_t m_vignetteParams[0x24]; // 0xD0 PostProcessingVignetteParameters_t
    std::uint8_t m_bHasLocalContrastParams[0x4]; // 0xF4 bool
    std::uint8_t m_localConstrastParams[0x14]; // 0xF8 PostProcessingLocalContrastParameters_t
    std::uint8_t m_nColorCorrectionVolumeDim[0x4]; // 0x10C int32
    std::uint8_t m_colorCorrectionVolumeData[0x10]; // 0x110 CUtlBinaryBlock
    std::uint8_t m_bHasColorCorrection[0x1]; // 0x120 bool
    std::uint8_t m_bHasFogScatteringParams[0x3]; // 0x121 bool
    std::uint8_t m_fogScatteringParams[0x20]; // 0x124 PostProcessingFogScatteringParameters_t
    std::uint8_t m_bHasLocalExposureParams[0x4]; // 0x144 bool
    std::uint8_t m_localExposureParams[0x10]; // 0x148 PostProcessingLocalExposureParameters_t
};

struct MaterialParamInt_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_nValue[0x8]; // 0x8 int32
};

struct PostProcessingVignetteParameters_t {
    static constexpr std::size_t size = 0x24;
    std::uint8_t m_flVignetteStrength[0x4]; // 0x0 float32
    std::uint8_t m_vCenter[0x8]; // 0x4 Vector2D
    std::uint8_t m_flRadius[0x4]; // 0xC float32
    std::uint8_t m_flRoundness[0x4]; // 0x10 float32
    std::uint8_t m_flFeather[0x4]; // 0x14 float32
    std::uint8_t m_vColorTint[0xC]; // 0x18 Vector
};

struct PostProcessingLocalContrastParameters_t {
    static constexpr std::size_t size = 0x14;
    std::uint8_t m_flLocalContrastStrength[0x4]; // 0x0 float32
    std::uint8_t m_flLocalContrastEdgeStrength[0x4]; // 0x4 float32
    std::uint8_t m_flLocalContrastVignetteStart[0x4]; // 0x8 float32
    std::uint8_t m_flLocalContrastVignetteEnd[0x4]; // 0xC float32
    std::uint8_t m_flLocalContrastVignetteBlur[0x4]; // 0x10 float32
};

struct PostProcessingTonemapParameters_t {
    static constexpr std::size_t size = 0x3C;
    std::uint8_t m_flExposureBias[0x4]; // 0x0 float32
    std::uint8_t m_flShoulderStrength[0x4]; // 0x4 float32
    std::uint8_t m_flLinearStrength[0x4]; // 0x8 float32
    std::uint8_t m_flLinearAngle[0x4]; // 0xC float32
    std::uint8_t m_flToeStrength[0x4]; // 0x10 float32
    std::uint8_t m_flToeNum[0x4]; // 0x14 float32
    std::uint8_t m_flToeDenom[0x4]; // 0x18 float32
    std::uint8_t m_flWhitePoint[0x4]; // 0x1C float32
    std::uint8_t m_flLuminanceSource[0x4]; // 0x20 float32
    std::uint8_t m_flExposureBiasShadows[0x4]; // 0x24 float32
    std::uint8_t m_flExposureBiasHighlights[0x4]; // 0x28 float32
    std::uint8_t m_flMinShadowLum[0x4]; // 0x2C float32
    std::uint8_t m_flMaxShadowLum[0x4]; // 0x30 float32
    std::uint8_t m_flMinHighlightLum[0x4]; // 0x34 float32
    std::uint8_t m_flMaxHighlightLum[0x4]; // 0x38 float32
};

struct PostProcessingFogScatteringParameters_t {
    static constexpr std::size_t size = 0x20;
    std::uint8_t m_fRadius[0x4]; // 0x0 float32
    std::uint8_t m_fScale[0x4]; // 0x4 float32
    std::uint8_t m_fCubemapScale[0x4]; // 0x8 float32
    std::uint8_t m_fVolumetricScale[0x4]; // 0xC float32
    std::uint8_t m_fGradientScale[0x4]; // 0x10 float32
    std::uint8_t m_fWaterScale[0x4]; // 0x14 float32
    std::uint8_t m_fWaterDensity[0x4]; // 0x18 float32
    std::uint8_t m_fWaterDepthBlurRadius[0x4]; // 0x1C float32
};

struct MaterialParamBuffer_t {
    static constexpr std::size_t size = 0x18;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_value[0x10]; // 0x8 CUtlBinaryBlock
};

struct MaterialResourceData_t {
    static constexpr std::size_t size = 0x130;
    std::uint8_t m_materialName[0x8]; // 0x0 CUtlString
    std::uint8_t m_shaderName[0x8]; // 0x8 CUtlString
    std::uint8_t m_intParams[0x18]; // 0x10 CUtlVector<MaterialParamInt_t>
    std::uint8_t m_floatParams[0x18]; // 0x28 CUtlVector<MaterialParamFloat_t>
    std::uint8_t m_vectorParams[0x18]; // 0x40 CUtlVector<MaterialParamVector_t>
    std::uint8_t m_textureParams[0x18]; // 0x58 CUtlVector<MaterialParamTexture_t>
    std::uint8_t m_dynamicParams[0x18]; // 0x70 CUtlVector<MaterialParamBuffer_t>
    std::uint8_t m_dynamicTextureParams[0x18]; // 0x88 CUtlVector<MaterialParamBuffer_t>
    std::uint8_t m_intAttributes[0x18]; // 0xA0 CUtlVector<MaterialParamInt_t>
    std::uint8_t m_floatAttributes[0x18]; // 0xB8 CUtlVector<MaterialParamFloat_t>
    std::uint8_t m_vectorAttributes[0x18]; // 0xD0 CUtlVector<MaterialParamVector_t>
    std::uint8_t m_textureAttributes[0x18]; // 0xE8 CUtlVector<MaterialParamTexture_t>
    std::uint8_t m_stringAttributes[0x18]; // 0x100 CUtlVector<MaterialParamString_t>
    std::uint8_t m_renderAttributesUsed[0x18]; // 0x118 CUtlVector<CUtlString>
};

struct PostProcessingBloomParameters_t {
    static constexpr std::size_t size = 0x88;
    std::uint8_t m_blendMode[0x4]; // 0x0 BloomBlendMode_t
    std::uint8_t m_flBloomStrength[0x4]; // 0x4 float32
    std::uint8_t m_flScreenBloomStrength[0x4]; // 0x8 float32
    std::uint8_t m_flBlurBloomStrength[0x4]; // 0xC float32
    std::uint8_t m_flBloomThreshold[0x4]; // 0x10 float32
    std::uint8_t m_flBloomThresholdWidth[0x4]; // 0x14 float32
    std::uint8_t m_flSkyboxBloomStrength[0x4]; // 0x18 float32
    std::uint8_t m_flBloomStartValue[0x4]; // 0x1C float32
    std::uint8_t m_flComputeBloomStrength[0x4]; // 0x20 float32
    std::uint8_t m_flComputeBloomThreshold[0x4]; // 0x24 float32
    std::uint8_t m_flComputeBloomRadius[0x4]; // 0x28 float32
    std::uint8_t m_flComputeBloomEffectsScale[0x4]; // 0x2C float32
    std::uint8_t m_flComputeBloomLensDirtStrength[0x4]; // 0x30 float32
    std::uint8_t m_flComputeBloomLensDirtBlackLevel[0x4]; // 0x34 float32
    std::uint8_t m_flBlurWeight[0x14]; // 0x38 float32[5]
    std::uint8_t m_vBlurTint[0x3C]; // 0x4C Vector[5]
};

struct MaterialParamFloat_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_flValue[0x8]; // 0x8 float32
};

struct PostProcessingLocalExposureParameters_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t m_fShadowOffsetEV[0x4]; // 0x0 float32
    std::uint8_t m_fHighlightOffsetEV[0x4]; // 0x4 float32
    std::uint8_t m_fSigma[0x4]; // 0x8 float32
    std::uint8_t m_fBoostLocalContrast[0x4]; // 0xC float32
};

struct MaterialParamTexture_t {
    static constexpr std::size_t size = 0x10;
    std::uint8_t pad_0[0x8]; // 0x0
    std::uint8_t m_pValue[0x8]; // 0x8 CStrongHandle<InfoForResourceTypeCTextureBase>
};

} // namespace