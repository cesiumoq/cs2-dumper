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

namespace Cs2.materialsystem2 {

    public enum VertJustification_e : int {
        VERT_JUSTIFICATION_TOP = 0, 
        VERT_JUSTIFICATION_CENTER = 1, 
        VERT_JUSTIFICATION_BOTTOM = 2, 
        VERT_JUSTIFICATION_NONE = 3, 
    }
    public enum LayoutPositionType_e : int {
        LAYOUTPOSITIONTYPE_VIEWPORT_RELATIVE = 0, 
        LAYOUTPOSITIONTYPE_FRACTIONAL = 1, 
        LAYOUTPOSITIONTYPE_NONE = 2, 
    }
    public enum ViewFadeMode_t : int {
        VIEW_FADE_CONSTANT_COLOR = 0, 
        VIEW_FADE_MODULATE = 1, 
        VIEW_FADE_MOD2X = 2, 
    }
    public enum BloomBlendMode_t : int {
        BLOOM_BLEND_ADD = 0, 
        BLOOM_BLEND_SCREEN = 1, 
        BLOOM_BLEND_BLUR = 2, 
    }
    public enum HorizJustification_e : int {
        HORIZ_JUSTIFICATION_LEFT = 0, 
        HORIZ_JUSTIFICATION_CENTER = 1, 
        HORIZ_JUSTIFICATION_RIGHT = 2, 
        HORIZ_JUSTIFICATION_NONE = 3, 
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x8)]
    public unsafe struct MaterialParam_t {
        [FieldOffset(0x0)] public fixed byte m_name[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct MaterialParamVector_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_value[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamString_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_value[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x158)]
    public unsafe struct PostProcessingResource_t {
        [FieldOffset(0x0)] public fixed byte m_bHasTonemapParams[0x4];
        [FieldOffset(0x4)] public fixed byte m_toneMapParams[0x3C];
        [FieldOffset(0x40)] public fixed byte m_bHasBloomParams[0x4];
        [FieldOffset(0x44)] public fixed byte m_bloomParams[0x88];
        [FieldOffset(0xCC)] public fixed byte m_bHasVignetteParams[0x4];
        [FieldOffset(0xD0)] public fixed byte m_vignetteParams[0x24];
        [FieldOffset(0xF4)] public fixed byte m_bHasLocalContrastParams[0x4];
        [FieldOffset(0xF8)] public fixed byte m_localConstrastParams[0x14];
        [FieldOffset(0x10C)] public fixed byte m_nColorCorrectionVolumeDim[0x4];
        [FieldOffset(0x110)] public fixed byte m_colorCorrectionVolumeData[0x10];
        [FieldOffset(0x120)] public fixed byte m_bHasColorCorrection[0x1];
        [FieldOffset(0x121)] public fixed byte m_bHasFogScatteringParams[0x3];
        [FieldOffset(0x124)] public fixed byte m_fogScatteringParams[0x20];
        [FieldOffset(0x144)] public fixed byte m_bHasLocalExposureParams[0x4];
        [FieldOffset(0x148)] public fixed byte m_localExposureParams[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamInt_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_nValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x24)]
    public unsafe struct PostProcessingVignetteParameters_t {
        [FieldOffset(0x0)] public fixed byte m_flVignetteStrength[0x4];
        [FieldOffset(0x4)] public fixed byte m_vCenter[0x8];
        [FieldOffset(0xC)] public fixed byte m_flRadius[0x4];
        [FieldOffset(0x10)] public fixed byte m_flRoundness[0x4];
        [FieldOffset(0x14)] public fixed byte m_flFeather[0x4];
        [FieldOffset(0x18)] public fixed byte m_vColorTint[0xC];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x14)]
    public unsafe struct PostProcessingLocalContrastParameters_t {
        [FieldOffset(0x0)] public fixed byte m_flLocalContrastStrength[0x4];
        [FieldOffset(0x4)] public fixed byte m_flLocalContrastEdgeStrength[0x4];
        [FieldOffset(0x8)] public fixed byte m_flLocalContrastVignetteStart[0x4];
        [FieldOffset(0xC)] public fixed byte m_flLocalContrastVignetteEnd[0x4];
        [FieldOffset(0x10)] public fixed byte m_flLocalContrastVignetteBlur[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x3C)]
    public unsafe struct PostProcessingTonemapParameters_t {
        [FieldOffset(0x0)] public fixed byte m_flExposureBias[0x4];
        [FieldOffset(0x4)] public fixed byte m_flShoulderStrength[0x4];
        [FieldOffset(0x8)] public fixed byte m_flLinearStrength[0x4];
        [FieldOffset(0xC)] public fixed byte m_flLinearAngle[0x4];
        [FieldOffset(0x10)] public fixed byte m_flToeStrength[0x4];
        [FieldOffset(0x14)] public fixed byte m_flToeNum[0x4];
        [FieldOffset(0x18)] public fixed byte m_flToeDenom[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flWhitePoint[0x4];
        [FieldOffset(0x20)] public fixed byte m_flLuminanceSource[0x4];
        [FieldOffset(0x24)] public fixed byte m_flExposureBiasShadows[0x4];
        [FieldOffset(0x28)] public fixed byte m_flExposureBiasHighlights[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flMinShadowLum[0x4];
        [FieldOffset(0x30)] public fixed byte m_flMaxShadowLum[0x4];
        [FieldOffset(0x34)] public fixed byte m_flMinHighlightLum[0x4];
        [FieldOffset(0x38)] public fixed byte m_flMaxHighlightLum[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x20)]
    public unsafe struct PostProcessingFogScatteringParameters_t {
        [FieldOffset(0x0)] public fixed byte m_fRadius[0x4];
        [FieldOffset(0x4)] public fixed byte m_fScale[0x4];
        [FieldOffset(0x8)] public fixed byte m_fCubemapScale[0x4];
        [FieldOffset(0xC)] public fixed byte m_fVolumetricScale[0x4];
        [FieldOffset(0x10)] public fixed byte m_fGradientScale[0x4];
        [FieldOffset(0x14)] public fixed byte m_fWaterScale[0x4];
        [FieldOffset(0x18)] public fixed byte m_fWaterDensity[0x4];
        [FieldOffset(0x1C)] public fixed byte m_fWaterDepthBlurRadius[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x18)]
    public unsafe struct MaterialParamBuffer_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_value[0x10];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x130)]
    public unsafe struct MaterialResourceData_t {
        [FieldOffset(0x0)] public fixed byte m_materialName[0x8];
        [FieldOffset(0x8)] public fixed byte m_shaderName[0x8];
        [FieldOffset(0x10)] public fixed byte m_intParams[0x18];
        [FieldOffset(0x28)] public fixed byte m_floatParams[0x18];
        [FieldOffset(0x40)] public fixed byte m_vectorParams[0x18];
        [FieldOffset(0x58)] public fixed byte m_textureParams[0x18];
        [FieldOffset(0x70)] public fixed byte m_dynamicParams[0x18];
        [FieldOffset(0x88)] public fixed byte m_dynamicTextureParams[0x18];
        [FieldOffset(0xA0)] public fixed byte m_intAttributes[0x18];
        [FieldOffset(0xB8)] public fixed byte m_floatAttributes[0x18];
        [FieldOffset(0xD0)] public fixed byte m_vectorAttributes[0x18];
        [FieldOffset(0xE8)] public fixed byte m_textureAttributes[0x18];
        [FieldOffset(0x100)] public fixed byte m_stringAttributes[0x18];
        [FieldOffset(0x118)] public fixed byte m_renderAttributesUsed[0x18];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x88)]
    public unsafe struct PostProcessingBloomParameters_t {
        [FieldOffset(0x0)] public fixed byte m_blendMode[0x4];
        [FieldOffset(0x4)] public fixed byte m_flBloomStrength[0x4];
        [FieldOffset(0x8)] public fixed byte m_flScreenBloomStrength[0x4];
        [FieldOffset(0xC)] public fixed byte m_flBlurBloomStrength[0x4];
        [FieldOffset(0x10)] public fixed byte m_flBloomThreshold[0x4];
        [FieldOffset(0x14)] public fixed byte m_flBloomThresholdWidth[0x4];
        [FieldOffset(0x18)] public fixed byte m_flSkyboxBloomStrength[0x4];
        [FieldOffset(0x1C)] public fixed byte m_flBloomStartValue[0x4];
        [FieldOffset(0x20)] public fixed byte m_flComputeBloomStrength[0x4];
        [FieldOffset(0x24)] public fixed byte m_flComputeBloomThreshold[0x4];
        [FieldOffset(0x28)] public fixed byte m_flComputeBloomRadius[0x4];
        [FieldOffset(0x2C)] public fixed byte m_flComputeBloomEffectsScale[0x4];
        [FieldOffset(0x30)] public fixed byte m_flComputeBloomLensDirtStrength[0x4];
        [FieldOffset(0x34)] public fixed byte m_flComputeBloomLensDirtBlackLevel[0x4];
        [FieldOffset(0x38)] public fixed byte m_flBlurWeight[0x14];
        [FieldOffset(0x4C)] public fixed byte m_vBlurTint[0x3C];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamFloat_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_flValue[0x8];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct PostProcessingLocalExposureParameters_t {
        [FieldOffset(0x0)] public fixed byte m_fShadowOffsetEV[0x4];
        [FieldOffset(0x4)] public fixed byte m_fHighlightOffsetEV[0x4];
        [FieldOffset(0x8)] public fixed byte m_fSigma[0x4];
        [FieldOffset(0xC)] public fixed byte m_fBoostLocalContrast[0x4];
    }
    [StructLayout(LayoutKind.Explicit, Size = 0x10)]
    public unsafe struct MaterialParamTexture_t {
        [FieldOffset(0x0)] public fixed byte pad_0[0x8];
        [FieldOffset(0x8)] public fixed byte m_pValue[0x8];
    }
}