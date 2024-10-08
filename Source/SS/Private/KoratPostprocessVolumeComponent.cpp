#include "KoratPostprocessVolumeComponent.h"

UKoratPostprocessVolumeComponent::UKoratPostprocessVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->enableAutoSetting = false;
    this->enableAutoGetting = false;
    this->CameraTypes = 0;
    this->BleachBypassOverride = false;
    this->BleachBypass = false;
    this->RenderingOpacityBleachBypass = 1.00f;
    this->SketchOverride = false;
    this->Sketch = false;
    this->RenderingOpacitySketch = 1.00f;
    this->SketchPower = 0.30f;
    this->SketchPatternRotation = 0.91f;
    this->SketchPatternSpeed = 1.50f;
    this->FakeLensFlareOverride = false;
    this->FakeLensFlare = false;
    this->RenderingOpacityFakeLensFlare = 1.00f;
    this->X_Offset = 0.00f;
    this->Y_Offset = 0.00f;
    this->FakeSunRotePivot = -0.50f;
    this->_3DSunAngleVector = 0.00f;
    this->InvertFlareRotation = false;
    this->BloomTexture = NULL;
    this->BloomTexScale = 1.00f;
    this->BloomRoteValue = 1.00f;
    this->BloomIntencity = 1.00f;
    this->FlareTexture = NULL;
    this->FlareTexScale = 1.00f;
    this->FlareRoteValue = 1.00f;
    this->FlareIntencity = 1.00f;
    this->SparkleTexture = NULL;
    this->SparkleTexScale = 1.00f;
    this->SparkleRoteValue = 1.00f;
    this->SparkleIntencity = 1.00f;
    this->AlarmSpeed = 0.50f;
    this->AnamorphicLensFlaresOverride = false;
    this->AnamorphicLensFlares = false;
    this->RenderingOpacityAnamorphicLensFlares = 1.00f;
    this->AnamorphicLensFlaresLinearColor = 1.00f;
    this->AnamorphicLensFlaresExposureScale = 1.00f;
    this->AnamorphicLensFlaresThreshold = 100.00f;
    this->AnamorphicLensFlaresIntensity = 1.00f;
    this->AnamorphicLensFlaresSteps = 20.00f;
    this->AnamorphicLensFlaresLength = 0.05f;
    this->DevOutlineOverride = false;
    this->DevOutline = false;
    this->DistortionTiring_U_Min = 1.00f;
    this->DistortionTiring_U_Max = 1.00f;
    this->DistortionTiring_V_Min = 0.25f;
    this->DistortionTiring_V_Max = 0.25f;
    this->AnimSpeed_U = 1.00f;
    this->AnimSpeed_V = 0.25f;
    this->DistortionValue = -0.18f;
    this->StencilNo1 = 1.00f;
    this->OutlineBlendAmount_S1 = 100.00f;
    this->OutlineBrightness_S1 = 20.00f;
    this->OutlineThickness_S1 = 1.00f;
    this->UseFill_S1 = 0.00f;
    this->FillBlendAmount_S1 = 0.00f;
    this->FillBrightness_S1 = 0.00f;
    this->NoiseContrast_S1 = 5.00f;
    this->StencilNo2 = 2.00f;
    this->OutlineBlendAmount_S2 = 100.00f;
    this->OutlineBrightness_S2 = 20.00f;
    this->OutlineThickness_S2 = 1.00f;
    this->UseFill_S2 = 0.00f;
    this->FillBlendAmount_S2 = 0.00f;
    this->FillBrightness_S2 = 0.00f;
    this->NoiseContrast_S2 = 5.00f;
    this->StencilNo3 = 3.00f;
    this->OutlineBlendAmount_S3 = 100.00f;
    this->OutlineBrightness_S3 = 20.00f;
    this->OutlineThickness_S3 = 1.00f;
    this->UseFill_S3 = 0.00f;
    this->FillBlendAmount_S3 = 0.00f;
    this->FillBrightness_S3 = 0.00f;
    this->NoiseContrast_S3 = 5.00f;
    this->StencilNo4 = 1.00f;
    this->UseFill_S4 = 1.00f;
    this->FillBlendAmount_S4 = 0.00f;
    this->FillBrightness_S4 = 0.00f;
    this->BlurOverride = false;
    this->Blur = false;
    this->RenderingOpacityBlur = 1.00f;
    this->BlurAmount = 0.20f;
    this->BlurSamples = 24;
    this->ChannelClamperOverride = false;
    this->ChannelClamper = false;
    this->RenderingOpacityChannelClamper = 1.00f;
    this->ChannelClamperRedIntensity = 1.00f;
    this->ChannelClamperGreenIntensity = 1.00f;
    this->ChannelClamperBlueIntensity = 1.00f;
    this->ChannelSwapperOverride = false;
    this->ChannelSwapper = false;
    this->RenderingOpacityChannelSwapper = 1.00f;
    this->ChannelSwapperRed = EKoratColorChannels::Red;
    this->ChannelSwapperGreen = EKoratColorChannels::Green;
    this->ChannelSwapperBlue = EKoratColorChannels::Blue;
    this->ColorizeOverride = false;
    this->Colorize = false;
    this->RenderingOpacityColorize = 1.00f;
    this->ColorizeDetail = 3.00f;
    this->ComicOverride = false;
    this->Comic = false;
    this->RenderingOpacityComic = 1.00f;
    this->ComicThreshold = 0.37f;
    this->ComicPreMultiplier = 10.00f;
    this->ComicDesaturation = 0.00f;
    this->ComicPatternIntensity = 1.00f;
    this->ComicPatternLineCount = 6;
    this->ComicPatternRotation = 1.17f;
    this->DistanceFogOverride = false;
    this->DistanceFog = false;
    this->RenderingOpacityDistanceFog = 1.00f;
    this->DistanceFogDistance = 6.00f;
    this->DistanceFogEdgeSharpness = 1.00f;
    this->DrmarizedColorOverride = false;
    this->DrmarizedColor = false;
    this->RenderingOpacityDrmarizedColor = 1.00f;
    this->DCDrowMapTornValue = 2.00f;
    this->DCFinalPower = 16.00f;
    this->DCHatchPower = 1.00f;
    this->DCHatchRotation = 5.00f;
    this->DCHatchSpeed = 1.50f;
    this->DCLineBlendIntencity = 0.25f;
    this->DCOterLineTargetBlendIntencity = 0.25f;
    this->DCThicknessValue = 5.00f;
    this->DCEdgeDetection = 300.00f;
    this->DCEdgeColorBrightness = 0.20f;
    this->DCEdgeHatchBias = 0.05f;
    this->DCDistortionDetail = 1.00f;
    this->DCDistortionAnimSpeed = 20.00f;
    this->DCDistortionStrength = 10.00f;
    this->DCDistortionPower = 0.03f;
    this->StencilNo_DrmarizedColor = 1.00f;
    this->BrightnessStrengthOverride = false;
    this->BrightnessStrength = false;
    this->RenderingOpacityBrightnessStrength = 1.00f;
    this->Strength = 1.00f;
    this->InvertOverride = false;
    this->Invert = false;
    this->RenderingOpacityInvert = 1.00f;
    this->lookOverride = false;
    this->look = false;
    this->LOOKPresets = EKoratLOOKPresetsEnum::Alienize1;
    this->MonochromeOverride = false;
    this->Monochrome = false;
    this->RenderingOpacityMonochrome = 1.00f;
    this->PulseOverride = false;
    this->Pulse = false;
    this->RenderingOpacityPulse = 1.00f;
    this->PulseCenterX = 0.50f;
    this->PulseCenterY = 0.50f;
    this->PulseSpeed = 1.00f;
    this->PulseSmoothing = 50.00f;
    this->RadialBlurOverride = false;
    this->RadialBlur = false;
    this->RenderingOpacityRadialBlur = 1.00f;
    this->RadialBlurWidth = 0.50f;
    this->RadialBlurSamples = 8;
    this->RadialBlurWorldToScreen = false;
    this->RadialBlurIntensityDistanceAttenuation = false;
    this->RadialBlurIntensity = 8.00f;
    this->ZS_ScouterSearchOverride = false;
    this->ZS_ScouterSearch = false;
    this->RenderingOpacityZSScouterSearch = 1.00f;
    this->NoiseBlendIntensity = 0.50f;
    this->ScanLineBlendIntensity = 0.50f;
    this->ScanLineCount = 60.00f;
    this->GridIntensity = 0.35f;
    this->GridTile = 15.00f;
    this->VignetteRudiusScouter = 1.00f;
    this->VignetteDensityScouter = 1.50f;
    this->StencilNo_ZSScouterSearch = 7.00f;
    this->SearchThickness = 0.50f;
    this->ScreenDamageIntensity = 10.00f;
    this->ScreenDamageDistortion = 0.15f;
    this->ScreenDamageEdgeSize = 0.80f;
    this->ScreenDamageFading = 0.30f;
    this->ZS_AuraSearchOverride = false;
    this->ZS_AuraSearch = false;
    this->RenderingOpacityZSAuraSearch = 1.00f;
    this->Distortion1 = -1.00f;
    this->Distortion2 = -0.20f;
    this->RenderScale = 1.00f;
    this->VignetteRudius = 1.00f;
    this->VignetteDensity = 1.50f;
    this->StencilNo_ZSAuraSearch = 7.00f;
    this->DistortionDetail = 10.00f;
    this->AnimSpeed = 1.00f;
    this->DistortionStrength = 1.50f;
    this->DistortionPower = 10.00f;
    this->ScreenDecalsSlot1Distortion = 0.16f;
    this->ScreenDecalsSlot1Intensity = 1.00f;
    this->ScreenDecalsSlot1PositionX = 0.19f;
    this->ScreenDecalsSlot1PositionY = 0.26f;
    this->ScreenDecalsSlot1Rotation = 0.00f;
    this->ScreenDecalsSlot1Size = 0.50f;
    this->ScreenDecalsSlot2Distortion = 0.16f;
    this->ScreenDecalsSlot2Intensity = 1.00f;
    this->ScreenDecalsSlot2PositionX = 0.60f;
    this->ScreenDecalsSlot2PositionY = 0.70f;
    this->ScreenDecalsSlot2Rotation = 0.00f;
    this->ScreenDecalsSlot2Size = 0.50f;
    this->ScreenDecalsSlot3Distortion = 0.16f;
    this->ScreenDecalsSlot3Intensity = 1.00f;
    this->ScreenDecalsSlot3PositionX = 0.78f;
    this->ScreenDecalsSlot3PositionY = 0.48f;
    this->ScreenDecalsSlot3Rotation = 0.00f;
    this->ScreenDecalsSlot3Size = 0.50f;
    this->ScreenDecalsSlot4Distortion = 0.16f;
    this->ScreenDecalsSlot4Intensity = 1.00f;
    this->ScreenDecalsSlot4PositionX = 0.35f;
    this->ScreenDecalsSlot4PositionY = 0.50f;
    this->ScreenDecalsSlot4Rotation = 0.00f;
    this->ScreenDecalsSlot4Size = 0.50f;
    this->FakeVolumeShadowOverride = false;
    this->FakeVolumeShadow = false;
    this->RenderingOpacityFVS = 1.00f;
    this->FVSShadowColorValue = 0.70f;
    this->FVSExcludeEmissive = 2.00f;
    this->FVSColorDepthDistance = 1000.00f;
    this->FVSFadeShift = 1.00f;
    this->FVSFadeScale = 1.00f;
    this->FVSSamplesCommon = 400.00f;
    this->FVSLineLengthCommon = 0.20f;
    this->FVSWeightPowerCommon = 10.00f;
    this->FVSFadeFactorCommon = 1.00f;
    this->FVSBrightness = 0.50f;
    this->FVSContrast = 0.60f;
    this->FVSWorldToScreen = false;
    this->FVSPivotX = 0.50f;
    this->FVSPivotY = 0.50f;
    this->ScreenWavesXTiling = 35.00f;
    this->ScreenWavesYTiling = 35.00f;
    this->SharpenOverride = false;
    this->Sharpen = false;
    this->RenderingOpacitySharpen = 1.00f;
    this->SharpenValue = 1.00f;
    this->BWSpeedLinesOverride = false;
    this->BWSpeedLines = false;
    this->RenderingOpacityBWSpeedLines = 1.00f;
    this->BWSpeedLinesIntensityBlackLine = 2.00f;
    this->BWSpeedLinesIntensityWhiteLine = 10.00f;
    this->BWSpeedLinesPivotX = 0.50f;
    this->BWSpeedLinesPivotY = 0.50f;
    this->BWSpeedLinesLineWidth = 0.15f;
    this->BWSpeedLinesLineSpeed = 1000.00f;
    this->BWSpeedLinesMaskRadius = 0.50f;
    this->BWSpeedLinesMaskHardness = 0.50f;
    this->BWSpeedLinesUseNoiseMask = true;
    this->BWSpeedLinesNoiseSpeed = 50.00f;
    this->BWSpeedLinesWorldToScreen = false;
    this->BWSpeedLinesIntensityDistanceAttenuation = false;
    this->Squares = false;
    this->SquaresScale = 50.00f;
    this->SquaresRatio = 1.00f;
    this->SquaresRadius = 2.00f;
    this->SquaresBrightness = 1.00f;
    this->ToonShadingOverride = false;
    this->ToonShading = false;
    this->RenderingOpacityToonShading = 1.00f;
    this->ToonShadingUseDiffuseBuffer = false;
    this->ToonShadingDetails = 220.00f;
    this->ToonShadingFading = 1024.00f;
    this->ToonShadingSize = 1.00f;
    this->ToonShadingSobelStrength = 0.00f;
    this->JaggedLineOverride = false;
    this->JaggedLine = false;
    this->RenderingOpacityJaggedLine = 1.00f;
    this->ContrastJLine = 1.00f;
    this->IntensityJLine = 1.00f;
    this->PowerJLine = 7.00f;
    this->NoiseFrequencyJLine = 10.00f;
    this->LuminanceThresholdJLine = 0.30f;
    this->BlurLengthJLine = 2.00f;
    this->BlurSamplesJLine = 4.00f;
    this->ActorFeaturetteOverride = false;
    this->ActorFeaturette = false;
    this->RenderingOpacityActorFeaturette = 1.00f;
    this->ActorFeaturetteBackgroundDesaturation = 1.00f;
    this->ActorFeaturetteForegroundSaturation = 0.00f;
    this->ActorFeaturetteBlurAmount = 1.00f;
    this->ActorFeaturetteBlurSamples = 6;
    this->ActorFeaturetteStencilMask = 0;
    this->CameraShakeOverride = false;
    this->CameraShake = false;
    this->RenderingOpacityCameraShake = 1.00f;
    this->CameraShakePower_X = 0.01f;
    this->CameraShakePower_Y = 0.01f;
    this->CameraShakeFrequency = 10.00f;
    this->KoratBloomOverride = false;
    this->KoratBloom = false;
    this->RenderingOpacityKoratBloom = 1.00f;
    this->BloomSumpling = 10.00f;
    this->BloomAmount = 0.35f;
    this->BloomBrightness = 0.50f;
    this->BloomContrast = 10.00f;
    this->BloomColorIntensity = 0.50f;
    this->BloomBlemdValue = 0.10f;
    this->DiscoBallBlockDistribution = 0.14f;
    this->DiscoBallRotationSpeed = 0.59f;
    this->DiscoBallManualRotation = 0.00f;
    this->ParaLightOverride = false;
    this->ParaLight = false;
    this->RenderingOpacityParaLight = 1.00f;
    this->RudiusValue = 1.50f;
    this->DensityValue = 3.00f;
    this->MaskOffsetX = 0.00f;
    this->MaskOffsetY = 0.50f;
    this->SelectiveColorOverride = false;
    this->SelectiveColor = false;
    this->RenderingOpacitySelectiveColor = 1.00f;
    this->SelectiveColorHueTolerance = 33.00f;
    this->SelectiveColorSaturationTolerance = 20.00f;
    this->SelectiveColorValueTolerance = 70.00f;
    this->WarpDistortionOverride = false;
    this->WarpDistortion = false;
    this->RenderingOpacityWarpDistortion = 1.00f;
    this->FadeFactor = 1.00f;
    this->MaskContrast = 0.75f;
    this->MaskScale = 1.00f;
    this->WarpScale = 0.80f;
    this->WarpFactorShift = 1.00f;
    this->WarpPower = -0.25f;
    this->TwistAngle = 0.00f;
    this->TwistFactorShift = 0.00f;
    this->TwistPower = 0.00f;
    this->ScreenFireDistortionAmount = 0.10f;
    this->ScreenFireMaskContrast = 3.70f;
    this->ScreenFireMaskScale = 1.40f;
    this->ScreenFireFlameTiling = 5.00f;
    this->ScreenFireSpeed = 1.00f;
    this->GradientFogOverride = false;
    this->GradientFog = false;
    this->RenderingOpacityGradientFog = 1.00f;
    this->GradientFogColors.AddDefaulted(3);
    this->GradientFogDistance = 6.00f;
    this->GradientFogSharpness = 0.35f;
    this->SpeedLinesOverride = false;
    this->SpeedLines = false;
    this->RenderingOpacitySpeedLines = 1.00f;
    this->SpeedLinesIntensity = 200.00f;
    this->SpeedLinesPivotX = 0.50f;
    this->SpeedLinesPivotY = 0.50f;
    this->SpeedLinesLineContrast = 90.00f;
    this->SpeedLinesLineWidth = 0.20f;
    this->SpeedLinesSpeed = 1000.00f;
    this->SpeedLinesMaskRadius = 8.00f;
    this->SpeedLinesMaskHardness = 0.02f;
    this->SpeedLinesWorldToScreen = false;
    this->SpeedLinesIntensityDistanceAttenuation = false;
    this->CrossGlareSeaSurfaceOverride = false;
    this->CrossGlareSeaSurface = false;
    this->RenderingOpacityCrossGlareSeaSurface = 1.00f;
    this->CrossGlareSeaSurfaceThreshold = 1.00f;
    this->CrossGlareSeaSurfaceMaskStrength = 0.50f;
    this->CrossGlareSeaSurfaceIntensity = 10.00f;
    this->CrossGlareSeaSurfaceSteps = 20.00f;
    this->CrossGlareSeaSurfaceLength = 0.01f;
    this->CrossGlowIntensity = 10.00f;
    this->VignetteMaskRudius = 0.50f;
    this->VignetteMaskDensity = 1.50f;
    this->VignetteGradientOffsetX = 0.00f;
    this->VignetteGradientOffsetY = 0.10f;
    this->DitherLimit = 1.00f;
    this->DrmarizeOverride = false;
    this->Drmarize = false;
    this->RenderingOpacityDrmarize = 1.00f;
    this->TypesOfLine = 3.00f;
    this->SamplesCommon = 20.00f;
    this->LineDetail = 10.00f;
    this->LineAnimSpeed = 10.00f;
    this->LineLengthCommon = 1.00f;
    this->Threshold = 10.00f;
    this->Brightness = 5.00f;
    this->Contrast = 1.00f;
    this->DetailBlemdValue = 0.10f;
    this->WeightPowerCommon = 10.00f;
    this->FadeFactorCommon = 1.00f;
    this->ImageValue = 1.00f;
    this->RadualFadeShift = 1.00f;
    this->RadualFadeScale = 1.00f;
    this->PyramidMasked = false;
    this->PyramidWidth = 1.00f;
    this->PyramidPan = 0.50f;
    this->PyramidTileAmount = 2.00f;
}








































































