/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const materialsystem2 = struct {

    pub const MaterialParam_t = extern struct {
        m_name: [0x8]u8, // 0x0
    };
    pub const MaterialParamVector_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_value: [0x10]u8, // 0x8
    };
    pub const MaterialParamString_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_value: [0x8]u8, // 0x8
    };
    pub const PostProcessingResource_t = extern struct {
        m_bHasTonemapParams: [0x4]u8, // 0x0
        m_toneMapParams: [0x3C]u8, // 0x4
        m_bHasBloomParams: [0x4]u8, // 0x40
        m_bloomParams: [0x88]u8, // 0x44
        m_bHasVignetteParams: [0x4]u8, // 0xCC
        m_vignetteParams: [0x24]u8, // 0xD0
        m_bHasLocalContrastParams: [0x4]u8, // 0xF4
        m_localConstrastParams: [0x14]u8, // 0xF8
        m_nColorCorrectionVolumeDim: [0x4]u8, // 0x10C
        m_colorCorrectionVolumeData: [0x10]u8, // 0x110
        m_bHasColorCorrection: [0x1]u8, // 0x120
        m_bHasFogScatteringParams: [0x3]u8, // 0x121
        m_fogScatteringParams: [0x20]u8, // 0x124
        m_bHasLocalExposureParams: [0x4]u8, // 0x144
        m_localExposureParams: [0x10]u8, // 0x148
    };
    pub const MaterialParamInt_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_nValue: [0x8]u8, // 0x8
    };
    pub const PostProcessingVignetteParameters_t = extern struct {
        m_flVignetteStrength: [0x4]u8, // 0x0
        m_vCenter: [0x8]u8, // 0x4
        m_flRadius: [0x4]u8, // 0xC
        m_flRoundness: [0x4]u8, // 0x10
        m_flFeather: [0x4]u8, // 0x14
        m_vColorTint: [0xC]u8, // 0x18
    };
    pub const PostProcessingLocalContrastParameters_t = extern struct {
        m_flLocalContrastStrength: [0x4]u8, // 0x0
        m_flLocalContrastEdgeStrength: [0x4]u8, // 0x4
        m_flLocalContrastVignetteStart: [0x4]u8, // 0x8
        m_flLocalContrastVignetteEnd: [0x4]u8, // 0xC
        m_flLocalContrastVignetteBlur: [0x4]u8, // 0x10
    };
    pub const PostProcessingTonemapParameters_t = extern struct {
        m_flExposureBias: [0x4]u8, // 0x0
        m_flShoulderStrength: [0x4]u8, // 0x4
        m_flLinearStrength: [0x4]u8, // 0x8
        m_flLinearAngle: [0x4]u8, // 0xC
        m_flToeStrength: [0x4]u8, // 0x10
        m_flToeNum: [0x4]u8, // 0x14
        m_flToeDenom: [0x4]u8, // 0x18
        m_flWhitePoint: [0x4]u8, // 0x1C
        m_flLuminanceSource: [0x4]u8, // 0x20
        m_flExposureBiasShadows: [0x4]u8, // 0x24
        m_flExposureBiasHighlights: [0x4]u8, // 0x28
        m_flMinShadowLum: [0x4]u8, // 0x2C
        m_flMaxShadowLum: [0x4]u8, // 0x30
        m_flMinHighlightLum: [0x4]u8, // 0x34
        m_flMaxHighlightLum: [0x4]u8, // 0x38
    };
    pub const PostProcessingFogScatteringParameters_t = extern struct {
        m_fRadius: [0x4]u8, // 0x0
        m_fScale: [0x4]u8, // 0x4
        m_fCubemapScale: [0x4]u8, // 0x8
        m_fVolumetricScale: [0x4]u8, // 0xC
        m_fGradientScale: [0x4]u8, // 0x10
        m_fWaterScale: [0x4]u8, // 0x14
        m_fWaterDensity: [0x4]u8, // 0x18
        m_fWaterDepthBlurRadius: [0x4]u8, // 0x1C
    };
    pub const MaterialParamBuffer_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_value: [0x10]u8, // 0x8
    };
    pub const MaterialResourceData_t = extern struct {
        m_materialName: [0x8]u8, // 0x0
        m_shaderName: [0x8]u8, // 0x8
        m_intParams: [0x18]u8, // 0x10
        m_floatParams: [0x18]u8, // 0x28
        m_vectorParams: [0x18]u8, // 0x40
        m_textureParams: [0x18]u8, // 0x58
        m_dynamicParams: [0x18]u8, // 0x70
        m_dynamicTextureParams: [0x18]u8, // 0x88
        m_intAttributes: [0x18]u8, // 0xA0
        m_floatAttributes: [0x18]u8, // 0xB8
        m_vectorAttributes: [0x18]u8, // 0xD0
        m_textureAttributes: [0x18]u8, // 0xE8
        m_stringAttributes: [0x18]u8, // 0x100
        m_renderAttributesUsed: [0x18]u8, // 0x118
    };
    pub const PostProcessingBloomParameters_t = extern struct {
        m_blendMode: [0x4]u8, // 0x0
        m_flBloomStrength: [0x4]u8, // 0x4
        m_flScreenBloomStrength: [0x4]u8, // 0x8
        m_flBlurBloomStrength: [0x4]u8, // 0xC
        m_flBloomThreshold: [0x4]u8, // 0x10
        m_flBloomThresholdWidth: [0x4]u8, // 0x14
        m_flSkyboxBloomStrength: [0x4]u8, // 0x18
        m_flBloomStartValue: [0x4]u8, // 0x1C
        m_flComputeBloomStrength: [0x4]u8, // 0x20
        m_flComputeBloomThreshold: [0x4]u8, // 0x24
        m_flComputeBloomRadius: [0x4]u8, // 0x28
        m_flComputeBloomEffectsScale: [0x4]u8, // 0x2C
        m_flComputeBloomLensDirtStrength: [0x4]u8, // 0x30
        m_flComputeBloomLensDirtBlackLevel: [0x4]u8, // 0x34
        m_flBlurWeight: [0x14]u8, // 0x38
        m_vBlurTint: [0x3C]u8, // 0x4C
    };
    pub const MaterialParamFloat_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_flValue: [0x8]u8, // 0x8
    };
    pub const PostProcessingLocalExposureParameters_t = extern struct {
        m_fShadowOffsetEV: [0x4]u8, // 0x0
        m_fHighlightOffsetEV: [0x4]u8, // 0x4
        m_fSigma: [0x4]u8, // 0x8
        m_fBoostLocalContrast: [0x4]u8, // 0xC
    };
    pub const MaterialParamTexture_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_pValue: [0x8]u8, // 0x8
    };
};
