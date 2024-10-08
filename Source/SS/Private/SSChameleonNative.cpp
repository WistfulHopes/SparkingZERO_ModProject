#include "SSChameleonNative.h"
#include "Components/BoxComponent.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "KoratPostProcessWorldToScreenComponent.h"

ASSChameleonNative::ASSChameleonNative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CommonRootComponent"));
    this->CommonRootComponent = (USceneComponent*)RootComponent;
    this->Native_BoundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Native_Bounding Box"));
    this->Native_InternalPP = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Native_InternalPP"));
    this->Native_MaterialBillboard = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("Native_MaterialBillboard"));
    this->Native_WorldToScreenRadialBlur = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("Native_WorldToScreenRadialBlur"));
    this->Native_WorldToScreenSpeedLines = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("Native_WorldToScreenSpeedLines"));
    this->Native_WorldToScreenBWSpeedLines = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("Native_WorldToScreenBWSpeedLines"));
    this->Native_WorldToScreenFVS = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("Native_WorldToScreenFVS"));
    this->Native_WorldToScreenDrmarize = CreateDefaultSubobject<UKoratPostProcessWorldToScreenComponent>(TEXT("Native_WorldToScreenDrmarize"));
    this->Native_Bleach_Bypass = false;
    this->Native_Distance_Fog = false;
    this->Native_Channel_Clamper = false;
    this->Native_RenderingOpacityChannelClamper = 1.00f;
    this->Native_iChannelClamper = NULL;
    this->Native_Channel_Swapper = false;
    this->Native_Screen_Drops = false;
    this->Native_Alcohol = false;
    this->Native_Drug = false;
    this->Native_Mosaic = false;
    this->Native_Pixel_Dissolve = false;
    this->Native_Blur = false;
    this->Native_RenderingOpacityBleachBypass = 1.00f;
    this->Native_RenderingOpacityDistanceFog = 1.00f;
    this->Native_RenderingOpacityChannelSwapper = 1.00f;
    this->Native_RenderingOpacityBlur = 1.00f;
    this->Native_Channel_Clamper_Red_Intensity = 1.00f;
    this->Native_Channel_Clamper_Green_Intensity = 1.00f;
    this->Native_Channel_Clamper_Blue_Intensity = 1.00f;
    this->Native_iBleachBypass = NULL;
    this->Native_iDistanceFog = NULL;
    this->Native_iChannelSwapper = NULL;
    this->Native_Channel_Swapper_Red = EKoratColorChannels::Red;
    this->Native_Channel_Swapper_Green = EKoratColorChannels::Green;
    this->Native_Channel_Swapper_Blue = EKoratColorChannels::Blue;
    this->Native_iScreenDrops = NULL;
    this->Native_iAlcohol = NULL;
    this->Native_iDrug = NULL;
    this->Native_iMosaic = NULL;
    this->Native_iPixelDissolve = NULL;
    this->Native_iBlur = NULL;
    this->Native_Screen_Drops_Layer_1_Intensity = 0.20f;
    this->Native_Mosaic_Scale = 200.00f;
    this->Native_Alcohol_Speed = 1.00f;
    this->Native_Drug_Speed = 2.00f;
    this->Native_Pixel_Dissolve_Intensity = 1.00f;
    this->Native_Blur_Amount = 0.20f;
    this->Native_DevOutline = false;
    this->Native_iDepthAura = NULL;
    this->Native_DistortionTiring_U_Min = 1.00f;
    this->Native_DistortionTiring_U_Max = 1.00f;
    this->Native_DistortionTiring_V_Min = 0.25f;
    this->Native_DistortionTiring_V_Max = 0.25f;
    this->Native_AnimSpeed_U = 0.10f;
    this->Native_AnimSpeed_V = 0.25f;
    this->Native_DistortionValue = -0.18f;
    this->Native_Colorize = false;
    this->Native_RenderingOpacityColorize = 1.00f;
    this->Native_iColorize = NULL;
    this->Native_Colorize_Detail = 3.00f;
    this->Native_Comic = false;
    this->Native_RenderingOpacityComic = 1.00f;
    this->Native_iComic = NULL;
    this->Native_Comic_Threshold = 0.37f;
    this->Native_Edge_Detect = false;
    this->Native_iEdgeDetect = NULL;
    this->Native_DrmarizedColor = false;
    this->Native_iDrmarizedColor = NULL;
    this->Native_RenderingOpacityDrmarizedColor = 1.00f;
    this->Native_DCDrowMapTornValue = 10.00f;
    this->Native_DCFinalPower = 1.00f;
    this->Native_DCHatchPower = 1.00f;
    this->Native_DCHatchRotation = 5.00f;
    this->Native_DCHatchSpeed = 1.50f;
    this->Native_DCLineBlendIntencity = 0.25f;
    this->Native_DCOterLineTargetBlendIntencity = 0.25f;
    this->Native_DCThicknessValue = 5.00f;
    this->Native_DCEdgeDetection = 300.00f;
    this->Native_DCEdgeColorBrightness = 0.20f;
    this->Native_DCEdgeHatchBias = 0.05f;
    this->Native_DCDistortionDetail = 1.00f;
    this->Native_DCDistortionAnimSpeed = 20.00f;
    this->Native_DCDistortionStrength = 10.00f;
    this->Native_DCDistortionPower = 0.03f;
    this->Native_StencilNo_DrmarizedColor = 1.00f;
    this->Native_iEmboss = NULL;
    this->Native_Glitch = false;
    this->Native_iGlitch = NULL;
    this->Native_Glitch_Speed = 7.00f;
    this->Native_Glitch_Lines = 20.00f;
    this->Native_Glitch_Blocking = 0.05f;
    this->Native_Monitor_Effects = false;
    this->Native_iGrainNLines = NULL;
    this->Native_Monitor_Effects_Line_Count = 1000.00f;
    this->Native_Monitor_Effects_Intensity_1 = 2.00f;
    this->Native_Monitor_Effects_Intensity_2 = 0.30f;
    this->Native_BrightnessStrength = false;
    this->Native_RenderingOpacityBrightnessStrength = 1.00f;
    this->Native_Strength = 1.00f;
    this->Native_iHardEmboss = NULL;
    this->Native_Hue_Panner = false;
    this->Native_iHuePanner = NULL;
    this->Native_Hue_Panner_Speed = 2.00f;
    this->Native_Monochrome = false;
    this->Native_RenderingOpacityMonochrome = 1.00f;
    this->Native_iMonochrome = NULL;
    this->Native_Radial_Blur = false;
    this->Native_RenderingOpacityRadialBlur = 1.00f;
    this->Native_Radial_Blur___Intensity = 1.50f;
    this->Native_iRadialBlur = NULL;
    this->Native_Radial_Blur_Width = 0.50f;
    this->Native_Radial_Blur_Samples = 8;
    this->Native_Scratches = false;
    this->Native_iScratches = NULL;
    this->Native_Fake_Volume_Shadow = false;
    this->Native_Monitor_Effects_Distortion_1 = 0.01f;
    this->Native_Monitor_Effects_Distortion_2 = 1.00f;
    this->Native_Monitor_Effects_Picture_Scale = 0.70f;
    this->Native_Distance_Fog_Distance = 6.00f;
    this->Native_Scratches_Distortion_Amount = 0.50f;
    this->Native_Screen_Drops_Layer_1_Speed = 0.10f;
    this->Native_Screen_Drops_Layer_1_Noise = 0.25f;
    this->Native_Screen_Drops_Layer_2_Intensity = 0.20f;
    this->Native_Screen_Drops_Layer_2_Speed = 0.20f;
    this->Native_Screen_Drops_Layer_2_Noise = 0.25f;
    this->Native_Screen_Drops_Layer_3_Intensity = 0.20f;
    this->Native_Screen_Drops_Layer_3_Speed = 0.30f;
    this->Native_Invert = false;
    this->Native_RenderingOpacityInvert = 1.00f;
    this->Native_iInvert = NULL;
    this->Native_Kuwahara = false;
    this->Native_iKuwahara = NULL;
    this->Native_Kuwahara_Amount = 2;
    this->Native_Pulse = false;
    this->Native_RenderingOpacityPulse = 1.00f;
    this->Native_iPulse = NULL;
    this->Native_Pulse_Center_X = 0.50f;
    this->Native_Pulse_Center_Y = 0.50f;
    this->Native_Pulse_Speed = 1.00f;
    this->Native_Pulse_Smoothing = 50.00f;
    this->Native_BWSpeedLines = false;
    this->Native_RenderingOpacityBWSpeedLines = 0.50f;
    this->Native_iBWSpeedLines = NULL;
    this->Native_BW_Speed_Lines_IntensityBlackLine = 2.00f;
    this->Native_BW_Speed_Lines_IntensityWhiteLine = 10.00f;
    this->Native_BW_Speed_Lines_PivotX = 0.50f;
    this->Native_BW_Speed_Lines_PivotY = 0.50f;
    this->Native_BW_Speed_Lines_LineWidth = 0.15f;
    this->Native_BW_Speed_Lines_LineSpeed = 1000.00f;
    this->Native_BW_Speed_Lines_MaskRadius = 0.50f;
    this->Native_BW_Speed_Lines_MaskHardness = 0.50f;
    this->Native_BW_Speed_Lines_UseNoiseMask = true;
    this->Native_BW_Speed_Lines_NoiseSpeed = 50.00f;
    this->Native_BW_Speed_Lines___WorldToScreen = false;
    this->Native_BW_Speed_Lines___Intensity_Distance_Attenuation = false;
    this->Native_Squares = false;
    this->Native_iSquares = NULL;
    this->Native_Squares_Scale = 50.00f;
    this->Native_Squares_Ratio = 1.00f;
    this->Native_Squares_Radius = 2.00f;
    this->Native_Squares_Brightness = 1.00f;
    this->Native_Tiles = false;
    this->Native_iTiles = NULL;
    this->Native_Tiles_Centered = true;
    this->Native_Tiles_Count = 5.00f;
    this->Native_TV_Noise = false;
    this->Native_iTVNoise = NULL;
    this->Native_TV_Noise_Contrast = 2.00f;
    this->Native_TV_Noise_Intensity = 0.50f;
    this->Native_LOOK_ = false;
    this->Native_LOOK__Presets = EKoratLOOKPresetsEnum::Alienize1;
    this->Native_Circles = false;
    this->Native_iCircles = NULL;
    this->Native_Circles_Ratio = 1.00f;
    this->Native_Circles_Tiling = 100.00f;
    this->Native_Sonar = false;
    this->Native_iSonar = NULL;
    this->Native_Sonar_Color_Intensity = 1.00f;
    this->Native_Sonar_Depth = 50.00f;
    this->Native_Sonar_Wave_Distance = 650.00f;
    this->Native_Sonar_Distortion_Intensity = 0.02f;
    this->Native_Sonar_Sharpness = 6.70f;
    this->Native_Alcohol_Offset = 1.00f;
    this->Native_Distance_Distortion = false;
    this->Native_iDistanceDistortion = NULL;
    this->Native_Distance_Distortion_Amount = 0.12f;
    this->Native_Distance_Distortion_Edge_Distance = 875.00f;
    this->Native_Distance_Distortion_Edge_Fading = 0.00f;
    this->Native_Distance_Distortion_Movement_Speed = 0.10f;
    this->Native_Distance_Distortion_Movement_Scale = 0.20f;
    this->Native_Distance_Distortion_Affected_Brightness = 0.00f;
    this->Native_Distance_Distortion_Unaffected_Brightness = 0.00f;
    this->Native_Drawing = false;
    this->Native_iDrawing = NULL;
    this->Native_Drawing_Noise_Algorithm = EKoratDrawingNoiseModes::Simplex;
    this->Native_Drawing_Ink_Amount = 0.10f;
    this->Native_Drawing_Liner_Amount = 1.00f;
    this->Native_Magic_Transitions = false;
    this->Native_iMagicTransitions = NULL;
    this->Native_Magic_Transitions_Transition_Amount = 0.25f;
    this->Native_Magic_Transitions_Flashing_Intensity = 5.00f;
    this->Native_Magic_Transitions_Flashing_Tolerance = 0.03f;
    this->Native_ZS_ScouterSearch = false;
    this->Native_RenderingOpacityZSScouterSearch = 1.00f;
    this->Native_iZS_ScouterView = NULL;
    this->Native_iZS_ScouterSearch = NULL;
    this->Native_NoiseBlendIntensity = 0.50f;
    this->Native_ScanLineBlendIntensity = 0.50f;
    this->Native_ScanLineCount = 60.00f;
    this->Native_GridIntensity = 0.35f;
    this->Native_GridTile = 15.00f;
    this->Native_VignetteRudiusScouter = 1.00f;
    this->Native_VignetteDensityScouter = 1.50f;
    this->Native_StencilNo_ZS_Scouter_Search = 7.00f;
    this->Native_SearchThickness = 5.00f;
    this->Native_Screen_Damage_Intensity = 10.00f;
    this->Native_Screen_Damage_Distortion = 0.15f;
    this->Native_Screen_Damage_Edge_Size = 0.80f;
    this->Native_Screen_Damage_Fading = 0.30f;
    this->Native_ZS_AuraSearch = false;
    this->Native_RenderingOpacityZSAuraSearch = 1.00f;
    this->Native_iZS_AuraView = NULL;
    this->Native_iZS_AuraSearch = NULL;
    this->Native_Distortion1 = -1.00f;
    this->Native_Distortion2 = -0.20f;
    this->Native_RenderScale = 1.00f;
    this->Native_VignetteRudius = 1.00f;
    this->Native_VignetteDensity = 1.50f;
    this->Native_StencilNo_ZS_Aura_Search = 7.00f;
    this->Native_DistortionDetail = 10.00f;
    this->Native_AnimSpeed = 1.00f;
    this->Native_DistortionStrength = 1.50f;
    this->Native_DistortionPower = 10.00f;
    this->Native_iScreenDecals = NULL;
    this->Native_Screen_Decals_Slot_1___Distortion = 0.16f;
    this->Native_Screen_Decals_Slot_1___Intensity = 1.00f;
    this->Native_Screen_Decals_Slot_1___Position_X = 0.19f;
    this->Native_Screen_Decals_Slot_1___Position_Y = 0.26f;
    this->Native_Screen_Decals_Slot_1___Rotation = 0.00f;
    this->Native_Screen_Decals_Slot_1___Size = 0.50f;
    this->Native_Screen_Decals_Slot_2___Distortion = 0.16f;
    this->Native_Screen_Decals_Slot_2___Intensity = 1.00f;
    this->Native_Screen_Decals_Slot_2___Position_X = 0.60f;
    this->Native_Screen_Decals_Slot_2___Position_Y = 0.70f;
    this->Native_Screen_Decals_Slot_2___Rotation = 0.00f;
    this->Native_Screen_Decals_Slot_2___Size = 0.50f;
    this->Native_Screen_Decals_Slot_3___Distortion = 0.16f;
    this->Native_Screen_Decals_Slot_3___Intensity = 1.00f;
    this->Native_Screen_Decals_Slot_3___Position_X = 0.78f;
    this->Native_Screen_Decals_Slot_3___Position_Y = 0.48f;
    this->Native_Screen_Decals_Slot_3___Rotation = 0.00f;
    this->Native_Screen_Decals_Slot_3___Size = 0.50f;
    this->Native_Screen_Decals_Slot_4___Distortion = 0.16f;
    this->Native_Screen_Decals_Slot_4___Intensity = 1.00f;
    this->Native_Screen_Decals_Slot_4___Position_X = 0.35f;
    this->Native_Screen_Decals_Slot_4___Position_Y = 0.50f;
    this->Native_Screen_Decals_Slot_4___Rotation = 0.00f;
    this->Native_Screen_Decals_Slot_4___Size = 0.50f;
    this->Native_Sharpen = false;
    this->Native_RenderingOpacitySharpen = 1.00f;
    this->Native_iSharpen = NULL;
    this->Native_Sharpen_Value = 1.00f;
    this->Native_Toon_Shading = false;
    this->Native_RenderingOpacityToonShading = 1.00f;
    this->Native_iToonShading = NULL;
    this->Native_Toon_Shading_Use_Diffuse_Buffer = false;
    this->Native_Toon_Shading_Details = 220.00f;
    this->Native_Toon_Shading_Fading_ = 1024.00f;
    this->Native_Toon_Shading_Size = 1.00f;
    this->Native_Toon_Shading_Sobel_Strength = 0.00f;
    this->Native_VistaMask = false;
    this->Native_iVistaMask = NULL;
    this->Native_RenderingOpacityVistaMask = 1.00f;
    this->Native_VistaMaskScale = 0.80f;
    this->Native_VistaMaskRote = 0.00f;
    this->Native_VistaMaskDistance = 7.50f;
    this->Native_Anamorphic_Lens_Flares = false;
    this->Native_RenderingOpacityAnamorphicLensFlares = 1.00f;
    this->Native_iAnamorphicLensFlares = NULL;
    this->Native_Anamorphic_Lens_Flares_Linear_Color = 1.00f;
    this->Native_Anamorphic_Lens_Flares_Exposure_Scale = 1.00f;
    this->Native_Anamorphic_Lens_Flares_Threshold = 100.00f;
    this->Native_Anamorphic_Lens_Flares_Intensity = 1.00f;
    this->Native_Anamorphic_Lens_Flares_Steps = 20.00f;
    this->Native_Anamorphic_Lens_Flares_Length = 0.05f;
    this->Native_Frost = false;
    this->Native_iFrost = NULL;
    this->Native_Frost_Colorization = 0.30f;
    this->Native_Frost_Distortion_Strength = 2.00f;
    this->Native_Frost_Visible_Area = 1.00f;
    this->Native_Neon = false;
    this->Native_iNeon = NULL;
    this->Native_NeonRenderingOpacity = 1.00f;
    this->Native_Neon_Power = 1.00f;
    this->Native_Neon_Noise = 0.00f;
    this->Native_Neon_Noise_Speed = 0.02f;
    this->Native_Custom_Depth_Highlighter = false;
    this->Native_iCustomDepthHighlighter = NULL;
    this->Native_Custom_Depth_Highlighter_Highlight_Opacity = 0.20f;
    this->Native_Custom_Depth_Highlighter__Clip_ = false;
    this->Native_iCustomDepthHighlighterClip = NULL;
    this->Native_Custom_Depth_Highlighter__C__Highlight_Opacity = 0.20f;
    this->Native_Edge_Detect_Threshold = 0.40f;
    this->Native_Scratches_Noising = 1.00f;
    this->Native_Enabled = true;
    this->Native_Unbound = true;
    this->Native_AllMaterials.AddDefaulted(146);
    this->Native_Screen_Drops_Layer_3_Noise = 0.25f;
    this->Native_Screen_Drops_Splashes_Amount = 2.00f;
    this->Native_Screen_Drops_Splashes_Tiling = 5.00f;
    this->Native_Screen_Drops_Splashes_Intensity = 1.00f;
    this->Native_Screen_Drops_Bump = 0.50f;
    this->Native_N2D_Transform = false;
    this->Native_i2DTransform = NULL;
    this->Native_SketchColor = false;
    this->Native_RenderingOpacitySC = 1.00f;
    this->Native_Letterboxing = false;
    this->Native_iLetterboxing = NULL;
    this->Native_Snow = false;
    this->Native_iSnow = NULL;
    this->Native_N2D_Transform_Anchor_Point__X_ = 0.50f;
    this->Native_N2D_Transform_Anchor_Point__Y_ = 0.50f;
    this->Native_N2D_Transform_Rotate = 0.00f;
    this->Native_N2D_Transform_Pan__X_ = 0.00f;
    this->Native_N2D_Transform_Pan__Y_ = 0.00f;
    this->Native_N2D_Transform_Scale__X_ = 1.00f;
    this->Native_N2D_Transform_Scale__Y_ = 1.00f;
    this->Native_N2D_Transform_Tiled = false;
    this->Native_Letterboxing_Size = 0.14f;
    this->Native_Letterboxing_Horizontal = true;
    this->Native_Letterboxing_Vertical = false;
    this->Native_Snow_Amount = 5.00f;
    this->Native_Snow_Distortion = 0.00f;
    this->Native_Snow_Size = 7.00f;
    this->Native_Snow_Speed__X_ = 500.00f;
    this->Native_Drawing_Animation_Speed = 7.00f;
    this->Native_Distance_Fog_Edge_Sharpness = 1.00f;
    this->Native_Screen_Drops_Diffuse_Intensity = 0.10f;
    this->Native_World_Splash = false;
    this->Native_iWorldSplash = NULL;
    this->Native_World_Splash_Distort = 0.00f;
    this->Native_World_Splash_Smoothness = 0.00f;
    this->Native_World_Splash_Tiling = 1.00f;
    this->Native_Blur_Samples = 24;
    this->Native_Comic_PreMultiplier = 10.00f;
    this->Native_Comic_Desaturation = 0.00f;
    this->Native_JaggedLine = false;
    this->Native_RenderingOpacityJaggedLine = 1.00f;
    this->Native_iJaggedLine = NULL;
    this->Native_ContrastJLine = 1.00f;
    this->Native_IntensityJLine = 1.00f;
    this->Native_PowerJLine = 7.00f;
    this->Native_NoiseFrequencyJLine = 10.00f;
    this->Native_LuminanceThresholdJLine = 0.30f;
    this->Native_BlurLengthJLine = 2.00f;
    this->Native_BlurSamplesJLine = 4.00f;
    this->Native_World_Glitch = false;
    this->Native_iWorldGlitch = NULL;
    this->Native_World_Glitch_Animated = false;
    this->Native_World_Glitch_Animation_Speed = 0.25f;
    this->Native_World_Glitch_Distance = 2.00f;
    this->Native_World_Glitch_Distance_Sharpness = 1.00f;
    this->Native_World_Glitch_Phase = 0.50f;
    this->Native_World_Glitch_Power = 1.00f;
    this->Native_Digitize = false;
    this->Native_iDigitize = NULL;
    this->Native_Digitize_Distance = 0.50f;
    this->Native_Digitize_Distance_Sharpness = 14.00f;
    this->Native_Digitize_Cell_Size = 0.30f;
    this->Native_Digitize_Cell_Color_Multiplier = 1.00f;
    this->Native_Digitize_Cell_Distortion = 1.00f;
    this->Native_Digitize_Background_Color_Multiplier = 0.00f;
    this->Native_FakeLensFlare = false;
    this->Native_RenderingOpacityFakeLensFlare = 1.00f;
    this->Native_X_Offset = 0.00f;
    this->Native_Y_Offset = 0.00f;
    this->Native_FakeSunRotePivot = -0.50f;
    this->Native_N3DSunAngleVector = 0.00f;
    this->Native_InvertFlareRotation = true;
    this->Native_BloomTexture = NULL;
    this->Native_BloomTexScale = 1.00f;
    this->Native_BloomRoteValue = 1.00f;
    this->Native_BloomIntencity = 1.00f;
    this->Native_FlareTexture = NULL;
    this->Native_FlareTexScale = 1.00f;
    this->Native_FlareRoteValue = 1.00f;
    this->Native_FlareIntencity = 1.00f;
    this->Native_SparkleTexture = NULL;
    this->Native_SparkleTexScale = 1.00f;
    this->Native_SparkleRoteValue = -1.00f;
    this->Native_SparkleIntencity = 1.00f;
    this->Native_iAlarm = NULL;
    this->Native_Alarm_Speed = 0.50f;
    this->Native_Sketch = false;
    this->Native_RenderingOpacitySketch = 1.00f;
    this->Native_iSketch = NULL;
    this->Native_Sketch_Power = 0.30f;
    this->Native_Sketch_Pattern_Rotation = 0.91f;
    this->Native_Sketch_Pattern_Speed = 1.50f;
    this->Native_Custom_Depth_Highlighter_Outline_Opacity = 2.00f;
    this->Native_Custom_Depth_Highlighter__C__Outline_Opacity = 2.00f;
    this->Native_Wired = false;
    this->Native_iWired = NULL;
    this->Native_Wired_Power = 1.00f;
    this->Native_Snow_Speed__Y_ = 0.50f;
    this->Native_Glitch_Grid_Distortion_Power = 0.00f;
    this->Native_Glitch_Grid_Distortion_Size = 10.00f;
    this->Native_Glitch_Grid_Distortion_Speed = 1.00f;
    this->Native_Monitor_Effects_Tiled = false;
    this->Native_RadialBlur_MaskDensity = 5.00f;
    this->Native_iScreenDamage = NULL;
    this->Native_Comic_Pattern_Intensity = 1.00f;
    this->Native_Comic_Pattern_Line_Count = 6;
    this->Native_Comic_Pattern_Rotation = 1.17f;
    this->Native_Actor_Featurette = false;
    this->Native_RenderingOpacityActorFeaturette = 1.00f;
    this->Native_iActorFeaturette = NULL;
    this->Native_Actor_Featurette_Background_Desaturation = 1.00f;
    this->Native_Actor_Featurette_Foreground_Saturation = 0.00f;
    this->Native_Actor_Featurette_Blur_Amount = 1.00f;
    this->Native_Actor_Featurette_Blur_Samples = 6;
    this->Native_Actor_Featurette_Stencil_Mask = 0;
    this->Native_Infected = false;
    this->Native_iInfected = NULL;
    this->Native_Infected_Distortion_Amount = 1.00f;
    this->Native_Infected_Smoothness = 0.04f;
    this->Native_Infected_Speed = 0.17f;
    this->Native_Infected_TransformZ = 0.04f;
    this->Native_Colored_AO = false;
    this->Native_iColoredAO = NULL;
    this->Native_Colored_AO_Intensity = 0.40f;
    this->Native_Camera_Shake = false;
    this->Native_RenderingOpacityCameraShake = 1.00f;
    this->Native_iCameraShake = NULL;
    this->Native_Camera_Shake_Power__X_ = 0.01f;
    this->Native_Camera_Shake_Power__Y_ = 0.01f;
    this->Native_Camera_Shake_Frequency = 10.00f;
    this->Native_StencilEmmisive = false;
    this->Native_iStencilEmmisive = NULL;
    this->Native_RenderingOpacityStencilEmmisive = 1.00f;
    this->Native_StencilEmmisiveStencilNo = 20.00f;
    this->Native_StencilEmmisiveStrength = 100.00f;
    this->Native_StencilEmmisiveNmlDrowStrength = 0.00f;
    this->Native_StencilEmmisiveNmlBrightnessvalue = 5.00f;
    this->Native_KoratBloom = false;
    this->Native_RenderingOpacityKoratBloom = 1.00f;
    this->Native_iDiscoBall = NULL;
    this->Native_BloomSumpling = 10.00f;
    this->Native_BloomAmount = 0.35f;
    this->Native_BloomBrightness = 0.50f;
    this->Native_BloomContrast = 10.00f;
    this->Native_BloomColorIntensity = 0.50f;
    this->Native_BloomBlemdValue = 0.10f;
    this->Native_Disco_Ball_Block_Distribution = 0.14f;
    this->Native_Disco_Ball_Rotation_Speed = 0.59f;
    this->Native_Disco_Ball_Manual_Rotation = 0.00f;
    this->Native_Para_Lights = false;
    this->Native_RenderingOpacityParaLight = 1.00f;
    this->Native_iHazyLights = NULL;
    this->Native_Melted_World = false;
    this->Native_iMeltedWorld = NULL;
    this->Native_Melted_World_Distance = 0.00f;
    this->Native_Melted_World_Power = 0.20f;
    this->Native_Melted_World_Sharpness = 1.00f;
    this->Native_Selective_Color = false;
    this->Native_RenderingOpacitySelectiveColor = 1.00f;
    this->Native_iSelectiveColor = NULL;
    this->Native_Selective_Color_Hue_Tolerance = 33.00f;
    this->Native_Selective_Color_Saturation_Tolerance = 20.00f;
    this->Native_Selective_Color_Value_Tolerance = 70.00f;
    this->Native_WarpDistortion = false;
    this->Native_RenderingOpacityWarpDistotion = 1.00f;
    this->Native_iWarp = NULL;
    this->Native_FadeFactor = 1.00f;
    this->Native_MaskContrast = 0.75f;
    this->Native_MaskScale = 1.00f;
    this->Native_WarpScale = 0.80f;
    this->Native_WarpFactorShift = 1.00f;
    this->Native_WarpPower = -0.25f;
    this->Native_TwistAngle = 0.00f;
    this->Native_TwistFactorShift = 0.00f;
    this->Native_TwistPower = 0.00f;
    this->Native_Screen_Fire_Distortion_Amount = 0.10f;
    this->Native_Screen_Fire_Mask_Contrast = 3.70f;
    this->Native_Screen_Fire_Mask_Scale = 1.40f;
    this->Native_Screen_Fire_Flame_Tiling = 5.00f;
    this->Native_Screen_Fire_Speed = 1.00f;
    this->Native_iScreenFire = NULL;
    this->Native_Haunted = false;
    this->Native_iHaunted = NULL;
    this->Native_Haunted_Amount = 0.50f;
    this->Native_Haunted_Mask_Scale = 1.00f;
    this->Native_Haunted_Texture_Scale = 1140.00f;
    this->Native_Grid_Cell = false;
    this->Native_iGridCell = NULL;
    this->Native_Grid_Cell_Animated = true;
    this->Native_Grid_Cell_Animation_Speed = 0.25f;
    this->Native_Grid_Cell_Tiling = 3.00f;
    this->Native_Grid_Cell_Transition_Amount = 3.00f;
    this->Native_Lens_Distortion = false;
    this->Native_iLensDistortion = NULL;
    this->Native_Lens_Distortion_Optic_Refinement = 500.00f;
    this->Native_Lens_Distortion_Optic_Size = 0.54f;
    this->Native_Lens_Distortion_Optic_Position_X = 0.50f;
    this->Native_Lens_Distortion_Optic_Position_Y = 0.50f;
    this->Native_Lens_Distortion_Scope_Texture_Scale_X = 0.99f;
    this->Native_Lens_Distortion_Scope_Texture_Scale_Y = 0.99f;
    this->Native_Zone = false;
    this->Native_iZone = NULL;
    this->Native_Zone_Radius = 1900.00f;
    this->Native_Zone_Edge_Hardness = 0.95f;
    this->Native_Drmarize = false;
    this->Native_RenderingOpacityDrmarize = 1.00f;
    this->Native_iDrmarizeEdgeSampling = NULL;
    this->Native_iDrmarizeLine = NULL;
    this->Native_iDrmarizeBlur = NULL;
    this->Native_TypesOfLine = 0.00f;
    this->Native_SamplesCommon = 20.00f;
    this->Native_LineDetail = 10.00f;
    this->Native_LineAnimSpeed = 10.00f;
    this->Native_LineLengthCommon = 1.00f;
    this->Native_Threshold = 10.00f;
    this->Native_Brightness = 5.00f;
    this->Native_Contrast = 1.00f;
    this->Native_DetailBlemdValue = 0.10f;
    this->Native_WeightPowerCommon = 10.00f;
    this->Native_FadeFactorCommon = 1.00f;
    this->Native_ImageValue = 1.00f;
    this->Native_RadualFadeShift = 1.00f;
    this->Native_RadualFadeScale = 1.00f;
    this->Native_Pyramid_Masked = false;
    this->Native_Pyramid_Width = 1.00f;
    this->Native_Pyramid_Pan = 0.50f;
    this->Native_Pyramid_Tile_Amount = 2.00f;
    this->Native_iPyramid = NULL;
    this->Native_Mojo = false;
    this->Native_iMojo = NULL;
    this->Native_Mojo_Animated = true;
    this->Native_Mojo_Animation_Speed = 0.25f;
    this->Native_Mojo_Distortion_Amount = 0.50f;
    this->Native_Mojo_Intensity = 50.00f;
    this->Native_Mojo_Phase = 0.40f;
    this->Native_Mojo_Tolerance = 0.03f;
    this->Native_Gradient_Fog = false;
    this->Native_RenderingOpacityGradientFog = 1.00f;
    this->Native_iGradientFog = NULL;
    this->Native_Gradient_Fog_Colors.AddDefaulted(3);
    this->Native_Gradient_Fog_Distance = 6.00f;
    this->Native_Gradient_Fog_Sharpness = 0.35f;
    this->Native_ColorIndexRT = NULL;
    this->Native_I_ColorIndexer = NULL;
    this->Native_Cross_Glare_Sea_Surface = false;
    this->Native_RenderingOpacityCrossGlareSeaSurface = 1.00f;
    this->Native_iDither = NULL;
    this->Native_Cross_Glare_Sea_Surface_Threshold = 1.00f;
    this->Native_Cross_Glare_Sea_Surface_MaskStrength = 0.50f;
    this->Native_Cross_Glare_Sea_Surface_Intensity = 10.00f;
    this->Native_Cross_Glare_Sea_Surface_Steps = 20.00f;
    this->Native_Cross_Glare_Sea_Surface_Length = 0.01f;
    this->Native_Cross_Glow_Intensity = 10.00f;
    this->Native_Vignette_Mask_Rudius = 0.50f;
    this->Native_Vignette_Mask_Density = 1.50f;
    this->Native_VignetteGradient_Offset_X = 0.00f;
    this->Native_VignetteGradient_Offset_Y = 0.10f;
    this->Native_Dither_Limit = 1.00f;
    this->Native_Speed_Lines = false;
    this->Native_RenderingOpacitySpeedLines = 1.00f;
    this->Native_iSpeedLines = NULL;
    this->Native_Speed_Lines_Intensity = 200.00f;
    this->Native_Speed_Lines_PivotX = 0.50f;
    this->Native_Speed_Lines_PivotY = 0.50f;
    this->Native_Speed_Lines_LineContrast = 90.00f;
    this->Native_Speed_Lines_Line_Width = 0.20f;
    this->Native_Speed_Lines_Speed = 1000.00f;
    this->Native_Speed_Lines_Mask_Radius = 8.00f;
    this->Native_Speed_Lines_Mask_Hardness = 0.02f;
    this->Native_GhostDistortion = false;
    this->Native_iGhostDistortion = NULL;
    this->Native_TransFormScaleFactor = 3.12f;
    this->Native_ChameleonOpacityValue = 1.00f;
    this->Native_ChameleonOpacityValue_NDF_ = 1.00f;
    this->Native_RudiusValue = 1.50f;
    this->Native_DensityValue = 3.00f;
    this->Native_MaskOffsetX = 0.00f;
    this->Native_MaskOffsetY = 0.50f;
    this->Native_SunAngle = 0.00f;
    this->Native_SunAngleStrength = 1.00f;
    this->Native_N1PCamera = NULL;
    this->Native_N2PCamera = NULL;
    this->Native_AlwaysFalse = false;
    this->Native_Radial_Blur___WorldToScreen = false;
    this->Native_Radial_Blur___Intensity_Distance_Attenuation = false;
    this->Native_StencilNo1 = 1.00f;
    this->Native_OutlineBlendAmount__S1_ = 100.00f;
    this->Native_OutlineBrightness__S1_ = 20.00f;
    this->Native_OutlineThickness__S1_ = 1.00f;
    this->Native_UseFill__S1_ = 0.00f;
    this->Native_FillBlendAmount__S1_ = 0.00f;
    this->Native_FillBrightness__S1_ = 0.00f;
    this->Native_NoiseContrast__S1_ = 5.00f;
    this->Native_StencilNo2 = 2.00f;
    this->Native_OutlineBlendAmount__S2_ = 100.00f;
    this->Native_OutlineBrightness__S2_ = 20.00f;
    this->Native_OutlineThickness__S2_ = 1.00f;
    this->Native_UseFill__S2_ = 0.00f;
    this->Native_FillBlendAmount__S2_ = 0.00f;
    this->Native_FillBrightness__S2_ = 0.00f;
    this->Native_NoiseContrast__S2_ = 5.00f;
    this->Native_StencilNo3 = 3.00f;
    this->Native_OutlineBlendAmount__S3_ = 100.00f;
    this->Native_OutlineBrightness__S3_ = 20.00f;
    this->Native_OutlineThickness__S3_ = 1.00f;
    this->Native_UseFill__S3_ = 0.00f;
    this->Native_FillBlendAmount__S3_ = 0.00f;
    this->Native_FillBrightness__S3_ = 0.00f;
    this->Native_NoiseContrast__S3_ = 5.00f;
    this->Native_StencilNo4 = 1.00f;
    this->Native_UseFill__S4_ = 1.00f;
    this->Native_FillBlendAmount__S4_ = 0.00f;
    this->Native_FillBrightness__S4_ = 0.00f;
    this->Native_iAscii = NULL;
    this->Native_ASCII_PreMultiplier = 1.00f;
    this->Native_Speed_Lines___WorldToScreen = false;
    this->Native_Speed_Lines___Intensity_Distance_Attenuation = false;
    this->Native_iFakeVolumeShadowDrow = NULL;
    this->Native_RenderingOpacityFVS = 1.00f;
    this->Native_FVSColorCommon = 0.10f;
    this->Native_FVSShadowStrength = 1.00f;
    this->Native_FVSExcludeEmissive = 10.00f;
    this->Native_FVSDepthDistance = 2000.00f;
    this->Native_FVSDepthInvert = 0.00f;
    this->Native_FVSFadeShift = 1.00f;
    this->Native_FVSFadeScale = 1.00f;
    this->Native_FVSSamplesCommon = 50.00f;
    this->Native_FVSLineLengthCommon = 1.00f;
    this->Native_FVSWeightPowerCommon = 50.00f;
    this->Native_FVSFadeFactorCommon = 1.00f;
    this->Native_FVSBrightness = 1.00f;
    this->Native_FVS___WorldToScreen = false;
    this->Native_FVSPivotX = 0.50f;
    this->Native_FVSPivotY = 0.50f;
    this->Native_iScreenWaves = NULL;
    this->Native_Screen_Waves_X_Tiling = 35.00f;
    this->Native_Screen_Waves_Y_Tiling = 35.00f;
    this->Native_StencilNo_GhostDistortion = 20.00f;
    this->Native_GDHighToModBranch = 0.80f;
    this->Native_GDMidToLowBranch = 0.03f;
    this->Native_GDMinBrightnessClamp = 0.02f;
    this->Native_GDEdgeThreshold = 15.00f;
    this->Native_GDEdgeEmmisive = 200.00f;
    this->Native_GDDistortionDetail = 5.00f;
    this->Native_GDAnimSpeed = 1.00f;
    this->Native_GDDistortion2_Muti = 0.20f;
    this->Native_GDImageValue = 0.75f;
    this->Native_GDDetailBlemdValue = 0.10f;
    this->Native_GDBrightness = 54.06f;
    this->Native_GDContrast = 0.50f;
    this->Native_Cyber_Scan_Speed = 0.10f;
    this->Native_Drmarize___WorldToScreen = false;
    this->Native_Drmarize___Intensity_Distance_Attenuation = false;
    this->Native_DrmarizeIntensityRateByDist = 1.00f;
    this->Native_FVSCharaMaskingValue = 1.00f;
    this->Native_FVSMapTolerance = 1.00f;
    this->Native_FVSContrast = 1.00f;
    this->Native_StaffDistortion = false;
    this->Native_iStaffDistortion = NULL;
    this->Native_StaffDistActiveValue = 1.00f;
    this->Native_StaffDistImageAtoB = 0.00f;
    this->Native_StaffDistMaskValue2Dto3D = 1.00f;
    this->Native_StaffDistBulgeStrength = -1.00f;
    this->Native_StaffDistBulgeRenderScale = 1.00f;
    this->Native_StaffDistBulgeTiled = 0.00f;
    this->Native_StaffDistAuraSphereMaskRudius = 0.65f;
    this->Native_StaffDistAuraSphereMaskDensity = 4.00f;
    this->Native_StaffAuraBrightness = 1.25f;
    this->Native_StaffDistAuraContrast = 2.50f;
    this->Native_StaffDistVignetteRudius = 1.00f;
    this->Native_StaffDistVignetteDencity = 2.00f;
    this->Native_StaffDistActiveCapture2D = 0.25f;
    this->Native_StencilNo_StaffDistortion = 9.00f;
    this->Native_Tritone = false;
    this->Native_iTritone = NULL;
    this->Native_RenderingOpacityTritone = 1.00f;
    this->Native_TritoneContrast = 1.00f;
    this->Native_ChrStencilColor = false;
    this->Native_iChrStencilColor = NULL;
    this->Native_RenderingOpacityCSC = 1.00f;
    this->Native_CSC_ChrColorStrength = 1.00f;
    this->Native_CSC_BgColorStrength = 1.00f;
    this->Native_CSC_EffColorStrength = 1.00f;
    this->Native_CSC_ScrColorStrength = 1.00f;
    this->Native_CSC_TrsColorStrength = 1.00f;
    this->Native_CSC_HatchingBrendValue = 1.00f;
    this->Native_CSC_Edge_Thickness = 2.00f;
    this->Native_CSC_Edge_Line_Scale_Horizon = 0.50f;
    this->Native_CSC_Edge_Line_Scale_Vertical = -0.50f;
    this->Native_CSC_Edge_Coefficient = 200.00f;
    this->Native_CSC_Edge_Line_Sampling_Scale = 0.10f;
    this->Native_CSC_SphereGradationStrength = 0.07f;
    this->Native_CSC_HatchRotation = 5.00f;
    this->Native_CSC_HatchSpeed = 1.50f;
    this->Native_CSC_HatchContrast = 0.75f;
    this->Native_CSC_TransitionTexAnimation_IN = 0.00f;
    this->Native_CSC_TransitionTexAnimetion_OT = 0.00f;
    this->Native_RenderingOpacity_CSC_ = 0.00f;
    this->Native_CSC_OpacityValue = 1.00f;
    this->Native_CSC_BlackValue_1P = 0.40f;
    this->Native_CSC_BlackValue_2P = 0.70f;
    this->Native_CSC_FlipNumber01 = 1.00f;
    this->Native_CSC_FlipNumber02 = 0.00f;
    this->Native_CSC_FlipNumber03 = 0.00f;
    this->Native_CSC_OUTliner_1P = 0.00f;
    this->Native_CSC_OUTliner_2P = 0.00f;
    this->Native_Iridescent = false;
    this->Native_iIridescent = NULL;
    this->Native_Iridescent_Iridescence = 1.19f;
    this->Native_iSketchColor = NULL;
    this->Native_SC_BGPencilValue = 1.00f;
    this->Native_SC_CharaPencilValue = 1.00f;
    this->Native_SC_CoverColorValue = 1.00f;
    this->Native_SC_FlipNumber1P = 1.00f;
    this->Native_SC_FlipNumber2P = 1.00f;
    this->Native_SC_CharaCoverColorValue = 1.00f;
    this->Native_SC_BGDesaturation = 1.00f;
    this->Native_SC_CharaDesaturation = 1.00f;
    this->Native_SC_FlipNumberBG = 1.00f;
    this->Native_SC_FlipNumberCharaOUT = 1.00f;
    this->Native_SC_FlipNumberObj = 1.00f;
    this->Native_SC_FlipNumberSky = 1.00f;
    this->Native_SC_ChrPencilShadowRange = 0.15f;
    this->Native_SC_ChrEdge_Line_Sampling_Scale = 1.50f;
    this->Native_SC_BGEdge_Line_Sampling_Scale = 2.00f;
    this->Native_SC_ChrPencilRangeContrast = 2.50f;
    this->Native_Kaleidoscope_SphericalDistortion = 0.40f;
    this->Native_Kaleidoscope_Warp = 10.00f;
    this->Native_Kaleidoscope_FMul = 1.20f;
    this->Native_Kaleidoscope_Amount = 3;
    this->Native_iKaleidoscope = NULL;
    this->Native_Kaleidoscope = false;
    this->Native_EffectDetailForTimeScale = false;
    this->Native_iEffectDetailForTimeScale = NULL;
    this->Native_GetEmmisive = 1.50f;
    this->Native_CharaInfluence = 2.00f;
    this->Native_DetailTileX = 4.00f;
    this->Native_EffectEmissive = 1.00f;
    this->Native_DetailTileY = 2.00f;
    this->Native_DetailAnim = 100.00f;
    this->Native_DetailPower = 7.50f;
    this->Native_DetailStrength = 0.75f;
    this->Native_CharaEffectUVScale = 20.00f;
    this->Native_EffectMaskStrength = 10.00f;
    this->Native_MonoValue = 1.00f;
    this->Native_NormalReversePower = 0.30f;
    this->Native_OclusionPower = 20.00f;
    this->Native_UseSunAngleFromUDS = false;
    this->Native_BoundingBox->SetupAttachment(RootComponent);
    this->Native_InternalPP->SetupAttachment(Native_BoundingBox);
    this->Native_MaterialBillboard->SetupAttachment(Native_BoundingBox);
}

void ASSChameleonNative::Native_ZoneFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_WorldSplashFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_WorldGlitchFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_WiredFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_TVNoiseFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ToonShadingFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_TilesFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_SquaresFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_SpeedLinesFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_SonarFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_SnowFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_SketchFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_SharpenFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_SetSunAngleStrength() {
}

void ASSChameleonNative::Native_SetEffectPriority(int32 EffectPriority, UMaterial* Material) {
}

void ASSChameleonNative::Native_SetAdvancedEffectFeaturesNoCustomDepth(const FSSChameleonAdvancedEffectFeaturesNoCustomDepth& Features, UMaterial* Material, UMaterialInstanceDynamic* DynamicMaterialInstance) {
}

void ASSChameleonNative::Native_SetAdvancedEffectFeatures(const FSSChameleonAdvancedEffectFeatures& Features, UMaterial* Material, UMaterialInstanceDynamic* DynamicMaterialInstance) {
}

void ASSChameleonNative::Native_SelectiveColorFunc(bool IsEnabled) {
}

bool ASSChameleonNative::Native_SearchKoratUDS() {
    return false;
}

bool ASSChameleonNative::Native_SearchBGDynamicSky() {
    return false;
}

void ASSChameleonNative::Native_ScreenWavesFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ScreenFireFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ScreenDropsFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ScreenDecalsFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ScreenDamageFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ScratchesFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_RadialBlurFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_PyramidFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_PulseFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_PixelDissolveFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_NeonFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_N2DTransformFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_MosaicFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_MonochromeFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_MonitorFXFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_MojoFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_MeltedWorldFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_MagicTransitionsFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_LOOKFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_LetterboxingFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_LensFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_KuwaharaFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_KaleidoscopeFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_IridescentFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_InvertFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_InitChameleon() {
}

void ASSChameleonNative::Native_InfectedFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_HuePannerFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_HazyLightsFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_HauntedFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_HardEmbossFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_GridCellFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_GradientFogFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_GlitchFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_GhostDistortionFunk(bool IsEnabled) {
}

void ASSChameleonNative::Native_GetSunAngleStrength() {
}

bool ASSChameleonNative::Native_GetSunAngle() {
    return false;
}

void ASSChameleonNative::Native_FrostFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_EmbossFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_EdgeDetectFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_DrugFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_DrawingFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_DitherFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_DistanceFogFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_DistanceDistortionFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_DiscoBallFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_DigitizeFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_CustomDepthHighlighterNCFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_CustomDepthHighlighterFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_CreateEffectMaterialInstance(UMaterial* Material, UMaterialInstanceDynamic*& Instance) {
}

void ASSChameleonNative::Native_ComicFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ColorizeFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ColoredAOFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_CirclesFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ChannelSwapperFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ChannelClamperFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_CameraShakeFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_BlurFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_BleachFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ASCIIFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ApplyChameleonSettings() {
}

void ASSChameleonNative::Native_AnamorphicLensFlaresFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_AlcoholFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_AlarmFunc(bool IsEnabled) {
}

void ASSChameleonNative::Native_ActorFeaturetteFunc(bool IsEnabled) {
}

bool ASSChameleonNative::IsEqualWorldToScreenComponent(const UKoratPostProcessWorldToScreenComponent* A, const UKoratPostProcessWorldToScreenComponent* B) {
    return false;
}

bool ASSChameleonNative::IsEqualPostProcessSettings(const FPostProcessSettings& A, const FPostProcessSettings& B) {
    return false;
}

bool ASSChameleonNative::IsEqualPostProcessComponent(const UPostProcessComponent* A, const UPostProcessComponent* B) {
    return false;
}

bool ASSChameleonNative::IsEqualMaterialArray(const TArray<UMaterial*>& A, const TArray<UMaterial*>& B) {
    return false;
}

bool ASSChameleonNative::IsEqualColorArray(const TArray<FColor>& A, const TArray<FColor>& B) {
    return false;
}

void ASSChameleonNative::CopyWorldToScreenComponent(const UKoratPostProcessWorldToScreenComponent* A, UKoratPostProcessWorldToScreenComponent* B) {
}

void ASSChameleonNative::CopyPostProcessComponent(const UPostProcessComponent* A, UPostProcessComponent* B) {
}


