/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

#![allow(non_snake_case, non_camel_case_types, dead_code)]

pub mod materialsystem2 {

    pub type VertJustification_e = i32;
    pub type LayoutPositionType_e = i32;
    pub type ViewFadeMode_t = i32;
    pub type BloomBlendMode_t = i32;
    pub type HorizJustification_e = i32;
    #[repr(C)]
    pub struct MaterialParam_t {
        pub m_name: [u8; 0x8], // 0x0
    }
    #[repr(C)]
    pub struct MaterialParamVector_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_value: [u8; 0x10], // 0x8
    }
    #[repr(C)]
    pub struct MaterialParamString_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_value: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct PostProcessingResource_t {
        pub m_bHasTonemapParams: [u8; 0x4], // 0x0
        pub m_toneMapParams: [u8; 0x3C], // 0x4
        pub m_bHasBloomParams: [u8; 0x4], // 0x40
        pub m_bloomParams: [u8; 0x88], // 0x44
        pub m_bHasVignetteParams: [u8; 0x4], // 0xCC
        pub m_vignetteParams: [u8; 0x24], // 0xD0
        pub m_bHasLocalContrastParams: [u8; 0x4], // 0xF4
        pub m_localConstrastParams: [u8; 0x14], // 0xF8
        pub m_nColorCorrectionVolumeDim: [u8; 0x4], // 0x10C
        pub m_colorCorrectionVolumeData: [u8; 0x10], // 0x110
        pub m_bHasColorCorrection: [u8; 0x1], // 0x120
        pub m_bHasFogScatteringParams: [u8; 0x3], // 0x121
        pub m_fogScatteringParams: [u8; 0x20], // 0x124
        pub m_bHasLocalExposureParams: [u8; 0x4], // 0x144
        pub m_localExposureParams: [u8; 0x10], // 0x148
    }
    #[repr(C)]
    pub struct MaterialParamInt_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_nValue: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct PostProcessingVignetteParameters_t {
        pub m_flVignetteStrength: [u8; 0x4], // 0x0
        pub m_vCenter: [u8; 0x8], // 0x4
        pub m_flRadius: [u8; 0x4], // 0xC
        pub m_flRoundness: [u8; 0x4], // 0x10
        pub m_flFeather: [u8; 0x4], // 0x14
        pub m_vColorTint: [u8; 0xC], // 0x18
    }
    #[repr(C)]
    pub struct PostProcessingLocalContrastParameters_t {
        pub m_flLocalContrastStrength: [u8; 0x4], // 0x0
        pub m_flLocalContrastEdgeStrength: [u8; 0x4], // 0x4
        pub m_flLocalContrastVignetteStart: [u8; 0x4], // 0x8
        pub m_flLocalContrastVignetteEnd: [u8; 0x4], // 0xC
        pub m_flLocalContrastVignetteBlur: [u8; 0x4], // 0x10
    }
    #[repr(C)]
    pub struct PostProcessingTonemapParameters_t {
        pub m_flExposureBias: [u8; 0x4], // 0x0
        pub m_flShoulderStrength: [u8; 0x4], // 0x4
        pub m_flLinearStrength: [u8; 0x4], // 0x8
        pub m_flLinearAngle: [u8; 0x4], // 0xC
        pub m_flToeStrength: [u8; 0x4], // 0x10
        pub m_flToeNum: [u8; 0x4], // 0x14
        pub m_flToeDenom: [u8; 0x4], // 0x18
        pub m_flWhitePoint: [u8; 0x4], // 0x1C
        pub m_flLuminanceSource: [u8; 0x4], // 0x20
        pub m_flExposureBiasShadows: [u8; 0x4], // 0x24
        pub m_flExposureBiasHighlights: [u8; 0x4], // 0x28
        pub m_flMinShadowLum: [u8; 0x4], // 0x2C
        pub m_flMaxShadowLum: [u8; 0x4], // 0x30
        pub m_flMinHighlightLum: [u8; 0x4], // 0x34
        pub m_flMaxHighlightLum: [u8; 0x4], // 0x38
    }
    #[repr(C)]
    pub struct PostProcessingFogScatteringParameters_t {
        pub m_fRadius: [u8; 0x4], // 0x0
        pub m_fScale: [u8; 0x4], // 0x4
        pub m_fCubemapScale: [u8; 0x4], // 0x8
        pub m_fVolumetricScale: [u8; 0x4], // 0xC
        pub m_fGradientScale: [u8; 0x4], // 0x10
        pub m_fWaterScale: [u8; 0x4], // 0x14
        pub m_fWaterDensity: [u8; 0x4], // 0x18
        pub m_fWaterDepthBlurRadius: [u8; 0x4], // 0x1C
    }
    #[repr(C)]
    pub struct MaterialParamBuffer_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_value: [u8; 0x10], // 0x8
    }
    #[repr(C)]
    pub struct MaterialResourceData_t {
        pub m_materialName: [u8; 0x8], // 0x0
        pub m_shaderName: [u8; 0x8], // 0x8
        pub m_intParams: [u8; 0x18], // 0x10
        pub m_floatParams: [u8; 0x18], // 0x28
        pub m_vectorParams: [u8; 0x18], // 0x40
        pub m_textureParams: [u8; 0x18], // 0x58
        pub m_dynamicParams: [u8; 0x18], // 0x70
        pub m_dynamicTextureParams: [u8; 0x18], // 0x88
        pub m_intAttributes: [u8; 0x18], // 0xA0
        pub m_floatAttributes: [u8; 0x18], // 0xB8
        pub m_vectorAttributes: [u8; 0x18], // 0xD0
        pub m_textureAttributes: [u8; 0x18], // 0xE8
        pub m_stringAttributes: [u8; 0x18], // 0x100
        pub m_renderAttributesUsed: [u8; 0x18], // 0x118
    }
    #[repr(C)]
    pub struct PostProcessingBloomParameters_t {
        pub m_blendMode: [u8; 0x4], // 0x0
        pub m_flBloomStrength: [u8; 0x4], // 0x4
        pub m_flScreenBloomStrength: [u8; 0x4], // 0x8
        pub m_flBlurBloomStrength: [u8; 0x4], // 0xC
        pub m_flBloomThreshold: [u8; 0x4], // 0x10
        pub m_flBloomThresholdWidth: [u8; 0x4], // 0x14
        pub m_flSkyboxBloomStrength: [u8; 0x4], // 0x18
        pub m_flBloomStartValue: [u8; 0x4], // 0x1C
        pub m_flComputeBloomStrength: [u8; 0x4], // 0x20
        pub m_flComputeBloomThreshold: [u8; 0x4], // 0x24
        pub m_flComputeBloomRadius: [u8; 0x4], // 0x28
        pub m_flComputeBloomEffectsScale: [u8; 0x4], // 0x2C
        pub m_flComputeBloomLensDirtStrength: [u8; 0x4], // 0x30
        pub m_flComputeBloomLensDirtBlackLevel: [u8; 0x4], // 0x34
        pub m_flBlurWeight: [u8; 0x14], // 0x38
        pub m_vBlurTint: [u8; 0x3C], // 0x4C
    }
    #[repr(C)]
    pub struct MaterialParamFloat_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_flValue: [u8; 0x8], // 0x8
    }
    #[repr(C)]
    pub struct PostProcessingLocalExposureParameters_t {
        pub m_fShadowOffsetEV: [u8; 0x4], // 0x0
        pub m_fHighlightOffsetEV: [u8; 0x4], // 0x4
        pub m_fSigma: [u8; 0x4], // 0x8
        pub m_fBoostLocalContrast: [u8; 0x4], // 0xC
    }
    #[repr(C)]
    pub struct MaterialParamTexture_t {
        pub pad_0: [u8; 0x8], // 0x0
        pub m_pValue: [u8; 0x8], // 0x8
    }
}
