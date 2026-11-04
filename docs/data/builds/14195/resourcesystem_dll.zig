/*                       cesium dumper
/*                  https://cs2-dump.vercel.app
/*  Generated from the live CS2 schema system.
*/

pub const resourcesystem = struct {

    pub const InfoForResourceTypeCResponseRulesList = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const AABBWS_t = extern struct {
        m_vMinBounds: [0xC]u8, // 0x0
        m_vMaxBounds: [0xC]u8, // 0xC
    };
    pub const InfoForResourceTypeCDotaItemDefinitionResource = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCMorphSetData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCVSoundStackScriptList = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const PackedAABB_t = extern struct {
        m_nPackedMin: [0x4]u8, // 0x0
        m_nPackedMax: [0x4]u8, // 0x4
    };
    pub const InfoForResourceTypeCVPhysXSurfacePropertiesList = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeManifestTestResource_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const ConstantInfo_t = extern struct {
        m_name: [0x8]u8, // 0x0
        m_nameToken: [0x4]u8, // 0x8
        m_flValue: [0x4]u8, // 0xC
    };
    pub const FuseFunctionIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const InfoForResourceTypeCGcExportableExternalData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeIAnimGraphModelBinding = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCJavaScriptResource = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CFuseSymbolTable = extern struct {
        m_constants: [0x18]u8, // 0x0
        m_variables: [0x18]u8, // 0x18
        m_functions: [0x18]u8, // 0x30
        m_constantMap: [0x20]u8, // 0x48
        m_variableMap: [0x20]u8, // 0x68
        m_functionMap: [0x28]u8, // 0x88
    };
    pub const InfoForResourceTypeCRenderMesh = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCVoxelVisibility = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeISmartProp = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCPhysAggregateData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCNmClip = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeWorld_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeProceduralTestResource_t = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const AABB_t = extern struct {
        m_vMinBounds: [0xC]u8, // 0x0
        m_vMaxBounds: [0xC]u8, // 0xC
    };
    pub const InfoForResourceTypeCPostProcessingResource = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const VariableInfo_t = extern struct {
        m_name: [0x8]u8, // 0x0
        m_nameToken: [0x4]u8, // 0x8
        m_nIndex: [0x2]u8, // 0xC
        m_nNumComponents: [0x1]u8, // 0xE
        m_eVarType: [0x1]u8, // 0xF
        m_eAccess: [0x8]u8, // 0x10
    };
    pub const InfoForResourceTypeIParticleSnapshot = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const FourQuaternions = extern struct {
        x: [0x10]u8, // 0x0
        y: [0x10]u8, // 0x10
        z: [0x10]u8, // 0x20
        w: [0x10]u8, // 0x30
    };
    pub const InfoForResourceTypeCPanoramaLayout = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCTypeScriptResource = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCChoreoSceneResource = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCNmSkeleton = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCTestResourceData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCAnimationGroup = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCVSoundEventScriptList = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCVoiceContainerBase = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCPanoramaStyle = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCWorldNode = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCSurfaceGraph = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCCSGOEconItem = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCNmGraphDefinition = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const CFuseProgram = extern struct {
        m_programBuffer: [0x18]u8, // 0x0
        m_variablesRead: [0x18]u8, // 0x18
        m_variablesWritten: [0x18]u8, // 0x30
        m_nMaxTempVarsUsed: [0x8]u8, // 0x48
    };
    pub const InfoForResourceTypeCCompositeMaterialKit = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCAnimData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeIMaterial2 = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCVDSPResource = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeIVectorGraphic = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCPanoramaDynamicImages = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeIPulseGraphDef = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCVDataItemDefs = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const FunctionInfo_t = extern struct {
        pad_0: [0x8]u8, // 0x0
        m_name: [0x8]u8, // 0x8
        m_nameToken: [0x4]u8, // 0x10
        m_nParamCount: [0x4]u8, // 0x14
        m_nIndex: [0x2]u8, // 0x18
        m_bIsPure: [0x6]u8, // 0x1A
    };
    pub const InfoForResourceTypeCVDataResource = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const NoiseOscillatorDef_t = extern struct {
        m_flPhase: [0x4]u8, // 0x0
        m_flFrequency: [0x4]u8, // 0x4
        m_flAmplitude: [0x4]u8, // 0x8
    };
    pub const InfoForResourceTypeCModel = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCDOTANovelsList = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const NoiseStreamDef_t = extern struct {
        m_nType: [0x4]u8, // 0x0
        m_nModifier: [0x4]u8, // 0x4
        m_nTurbulence: [0x4]u8, // 0x8
        m_flOutputMin: [0x4]u8, // 0xC
        m_flOutputMax: [0x4]u8, // 0x10
        m_flScale: [0x4]u8, // 0x14
        m_vOffsetRate: [0xC]u8, // 0x18
        m_flOffset: [0x4]u8, // 0x24
        m_nOctaves: [0x4]u8, // 0x28
        m_flTurbulenceScale: [0x4]u8, // 0x2C
        m_flTurbulenceMix: [0x8]u8, // 0x30
        m_Oscillators: [0x18]u8, // 0x38
    };
    pub const InfoForResourceTypeCTextureBase = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const FuseVariableIndex_t = extern struct {
        m_Value: [0x2]u8, // 0x0
    };
    pub const InfoForResourceTypeIParticleSystemDefinition = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCSequenceGroupData = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const ManifestTestResource_t = extern struct {
        m_name: [0x8]u8, // 0x0
        m_child: [0x8]u8, // 0x8
    };
    pub const InfoForResourceTypeCEntityLump = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
    pub const InfoForResourceTypeCDOTAPatchNotesList = extern struct {
        pad_0: [0x1]u8, // 0x0
    };
};
