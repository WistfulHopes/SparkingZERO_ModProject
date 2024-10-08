#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Scene.h"
#include "EKoratColorChannels.h"
#include "EKoratDrawingNoiseModes.h"
#include "EKoratLOOKPresetsEnum.h"
#include "SSChameleon.h"
#include "SSChameleonAdvancedEffectFeatures.h"
#include "SSChameleonAdvancedEffectFeaturesNoCustomDepth.h"
#include "SSChameleonVector2DN.h"
#include "SSChameleonVector3DN.h"
#include "SSChameleonNative.generated.h"

class AActor;
class AKoratUDS_Ultra_Dynamic_Sky;
class ASSMapUltraDynamicSkyActor;
class UBoxComponent;
class UCurveFloat;
class UKoratPostProcessWorldToScreenComponent;
class UMaterial;
class UMaterialBillboardComponent;
class UMaterialInstanceDynamic;
class UPostProcessComponent;
class USceneComponent;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ASSChameleonNative : public ASSChameleon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent* CommonRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UBoxComponent* Native_BoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* Native_InternalPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* Native_MaterialBillboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* Native_WorldToScreenRadialBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* Native_WorldToScreenSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* Native_WorldToScreenBWSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* Native_WorldToScreenFVS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    UKoratPostProcessWorldToScreenComponent* Native_WorldToScreenDrmarize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Bleach_Bypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Distance_Fog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Channel_Clamper;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityChannelClamper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mChannelClamper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iChannelClamper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Channel_Swapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Screen_Drops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Alcohol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Drug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Mosaic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_Pixel_Dissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Blur;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityBleachBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mBleachBypass;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityDistanceFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDistanceFog;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityChannelSwapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mChannelSwapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mScreenDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mAlcohol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDrug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mMosaic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mPixelDissolve;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mBlur;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Channel_Clamper_Red_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Channel_Clamper_Green_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Channel_Clamper_Blue_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iBleachBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDistanceFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iChannelSwapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratColorChannels Native_Channel_Swapper_Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratColorChannels Native_Channel_Swapper_Green;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratColorChannels Native_Channel_Swapper_Blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iScreenDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iAlcohol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDrug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iMosaic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iPixelDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Drops_Layer_1_Map;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_1_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Mosaic_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Alcohol_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Drug_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pixel_Dissolve_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Blur_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_DevOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDepthAura;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDepthAura;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionTiring_U_Min;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionTiring_U_Max;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionTiring_V_Min;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionTiring_V_Max;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_AnimSpeed_U;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_AnimSpeed_V;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Colorize;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityColorize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mColorize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iColorize;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Colorize_Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Comic;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityComic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mComic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iComic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Comic_Blend_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Comic_Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Edge_Detect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mEdgeDetect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iEdgeDetect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_DrmarizedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDrmarizedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDrmarizedColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityDrmarizedColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCDrowMapTornValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_DCFinalPower;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCHatchPower;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCHatchRotation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCHatchSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCLineBlendIntencity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCOterLineTargetBlendIntencity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCThicknessValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCEdgeDetection;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCEdgeColorBrightness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCEdgeHatchBias;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCDistortionDetail;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCDistortionAnimSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCDistortionStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DCDistortionPower;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo_DrmarizedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mEmboss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iEmboss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Glitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mGlitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iGlitch;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Glitch_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Glitch_Lines;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Glitch_Blocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Monitor_Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mGrainNLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iGrainNLines;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Monitor_Effects_Line_Count;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Monitor_Effects_Intensity_1;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Monitor_Effects_Intensity_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_BrightnessStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityBrightnessStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mHardEmboss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iHardEmboss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Hue_Panner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mHuePanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iHuePanner;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Hue_Panner_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Monochrome;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityMonochrome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mMonochrome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iMonochrome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Monochrome_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Radial_Blur;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityRadialBlur;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Radial_Blur___Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mRadialBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iRadialBlur;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Radial_Blur_Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Native_Radial_Blur_Samples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Scratches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mScratches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iScratches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Fake_Volume_Shadow;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Monitor_Effects_Distortion_1;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Monitor_Effects_Distortion_2;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Monitor_Effects_Picture_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Distance_Fog_Near_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Distance_Fog_Far_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Fog_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Scratches_Distortion_Map;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Scratches_Distortion_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Scratches_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_1_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_1_Noise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Drops_Layer_2_Map;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_2_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_2_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_2_Noise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Drops_Layer_3_Map;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_3_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_3_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Invert;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_Kuwahara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mKuwahara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iKuwahara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Native_Kuwahara_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Pulse;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityPulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mPulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iPulse;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pulse_Center_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pulse_Center_Y;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pulse_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pulse_Smoothing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_BWSpeedLines;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityBWSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mBWSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iBWSpeedLines;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_IntensityBlackLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_IntensityWhiteLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_PivotX;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_PivotY;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_LineWidth;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_LineSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_MaskRadius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_MaskHardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_BW_Speed_Lines_UseNoiseMask;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BW_Speed_Lines_NoiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_BW_SpeedLines___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_BW_Speed_Lines___WorldToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_BW_Speed_Lines___Intensity_Distance_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_BW_Speed_Lines_Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Native_BW_Speed_Lines___Curve_Distance_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Squares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSquares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSquares;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Squares_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Squares_Ratio;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Squares_Radius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Squares_Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Tiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_Tiles_Centered;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Tiles_Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_TV_Noise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mTVNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iTVNoise;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_TV_Noise_Contrast;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_TV_Noise_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Native_Native_Post_Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_LOOK_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratLOOKPresetsEnum Native_LOOK__Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Circles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mCircles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iCircles;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Circles_Ratio;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Circles_Tiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Sonar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSonar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSonar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Sonar_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sonar_Color_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sonar_Depth;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sonar_Wave_Distance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sonar_Distortion_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sonar_Sharpness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Alcohol_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Distance_Distortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDistanceDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDistanceDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Distance_Distortion_Normal;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Distortion_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Distortion_Edge_Distance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Distortion_Edge_Fading;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Distortion_Movement_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Distortion_Movement_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Distortion_Affected_Brightness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Distortion_Unaffected_Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Drawing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDrawing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDrawing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Drawing_Paper_Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratDrawingNoiseModes Native_Drawing_Noise_Algorithm;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Drawing_Ink_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Drawing_Liner_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Drawing_Blending_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Magic_Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mMagicTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iMagicTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Magic_Transitions_Final_Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Magic_Transitions_Mask_Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Magic_Transitions_Transition_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Magic_Transitions_Flashing_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Magic_Transitions_Flashing_Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Magic_Transitions_Flashing_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_ZS_ScouterSearch;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityZSScouterSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mZS_ScouterView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mZS_ScouterSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iZS_ScouterView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iZS_ScouterSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_ScouterColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_NoiseBlendIntensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_ScanLineBlendIntensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_ScanLineCount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GridIntensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GridTile;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VignetteRudiusScouter;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VignetteDensityScouter;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo_ZS_Scouter_Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_SearchColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SearchThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Damage_Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Damage_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Damage_Distortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Screen_Damage_Tint;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Damage_Edge_Size;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Damage_Fading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_ZS_AuraSearch;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityZSAuraSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mZS_AuraView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mZS_AuraSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iZS_AuraView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iZS_AuraSearch;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distortion1;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distortion2;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VignetteRudius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VignetteDensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo_ZS_Aura_Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_AuraColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionDetail;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_AnimSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DistortionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mScreenDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iScreenDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Decals_Slot_1___Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_1___Distortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_1___Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_1___Position_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_1___Position_Y;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_1___Rotation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_1___Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Decals_Slot_2___Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_2___Distortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_2___Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_2___Position_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_2___Position_Y;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_2___Rotation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_2___Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Decals_Slot_3___Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_3___Distortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_3___Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_3___Position_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_3___Position_Y;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_3___Rotation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_3___Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Screen_Decals_Slot_4___Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_4___Distortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_4___Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_4___Position_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_4___Position_Y;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_4___Rotation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Decals_Slot_4___Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Sharpen;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacitySharpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSharpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSharpen;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sharpen_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Toon_Shading;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityToonShading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mToonShading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iToonShading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Toon_Shading_Use_Diffuse_Buffer;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Toon_Shading_Details;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Toon_Shading_Fading_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Toon_Shading_Size;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Toon_Shading_Sobel_Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_VistaMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mVistaMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iVistaMask;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityVistaMask;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VistaMaskScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VistaMaskRote;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VistaMaskDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_VistaMaskOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Anamorphic_Lens_Flares;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityAnamorphicLensFlares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mAnamorphicLensFlares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iAnamorphicLensFlares;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Anamorphic_Lens_Flares_Linear_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Anamorphic_Lens_Flares_Exposure_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Anamorphic_Lens_Flares_Threshold;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Anamorphic_Lens_Flares_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Anamorphic_Lens_Flares_Steps;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Anamorphic_Lens_Flares_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Anamorphic_Lens_Flares_Tint_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Frost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mFrost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iFrost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Frost_Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Frost_Colorization;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Frost_Distortion_Strength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Frost_Visible_Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Neon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mNeon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iNeon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_NeonRenderingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Neon_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Neon_Background_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Neon_Power;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Neon_Noise;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Neon_Noise_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Custom_Depth_Highlighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mCustomDepthHighlighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iCustomDepthHighlighter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Custom_Depth_Highlighter_Highlight_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Custom_Depth_Highlighter_Highlight_Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Custom_Depth_Highlighter__Clip_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mCustomDepthHighlighterClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iCustomDepthHighlighterClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Custom_Depth_Highlighter__C__Highlight_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Custom_Depth_Highlighter__C__Highlight_Opacity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Edge_Detect_Threshold;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Scratches_Noising;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_Unbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterial*> Native_AllMaterials;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Layer_3_Noise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Screen_Drops_Diffuse_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Splashes_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Splashes_Tiling;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Splashes_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Bump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_N2D_Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_m2DTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_i2DTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_SketchColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacitySC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Letterboxing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mLetterboxing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iLetterboxing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Snow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSnow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSnow;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_N2D_Transform_Anchor_Point__X_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_N2D_Transform_Anchor_Point__Y_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_N2D_Transform_Rotate;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_N2D_Transform_Pan__X_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_N2D_Transform_Pan__Y_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_N2D_Transform_Scale__X_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_N2D_Transform_Scale__Y_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_N2D_Transform_Tiled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Letterboxing_Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Letterboxing_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Letterboxing_Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Letterboxing_Vertical;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Snow_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Snow_Distortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Snow_Size;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Snow_Speed__X_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Drawing_Animation_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Distance_Fog_Edge_Sharpness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Drops_Diffuse_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_World_Splash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mWorldSplash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iWorldSplash;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_World_Splash_Distort;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_World_Splash_Smoothness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_World_Splash_Tiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_World_Splash_Color_Tint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Native_Blur_Samples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Frost_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Comic_PreMultiplier;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Comic_Desaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_JaggedLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityJaggedLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mJaggedLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iJaggedLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_ContrastJLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_IntensityJLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_PowerJLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_NoiseFrequencyJLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_LuminanceThresholdJLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BlurLengthJLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_BlurDirectionJLine;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BlurSamplesJLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_JaggedLine___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_World_Glitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mWorldGlitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iWorldGlitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_World_Glitch_Animated;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_World_Glitch_Animation_Speed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_World_Glitch_Distance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_World_Glitch_Distance_Sharpness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_World_Glitch_Phase;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_World_Glitch_Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Native_World_Glitch_Grid_Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Native_World_Glitch_Grid_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Digitize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDigitize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDigitize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Digitize_Cell_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_Digitize_Cell_Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_Digitize_Cell_Position_Over_Time;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Digitize_Distance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Digitize_Distance_Sharpness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Digitize_Cell_Size;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Digitize_Cell_Color_Multiplier;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Digitize_Cell_Distortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Digitize_Background_Color_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_FakeLensFlare;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityFakeLensFlare;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_X_Offset;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Y_Offset;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FakeSunRotePivot;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_N3DSunAngleVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_InvertFlareRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture* Native_BloomTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_BloomMultColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BloomTexScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BloomRoteValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_BloomIntencity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture* Native_FlareTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_FlareMultColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FlareTexScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FlareRoteValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FlareIntencity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture* Native_SparkleTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_SparkleMultColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SparkleTexScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SparkleRoteValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SparkleIntencity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Alarm_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Alarm_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Sketch;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacitySketch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSketch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSketch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Sketch_Background_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sketch_Power;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sketch_Pattern_Rotation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Sketch_Pattern_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Custom_Depth_Highlighter_Outline_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Custom_Depth_Highlighter_Outline_Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Custom_Depth_Highlighter__C__Outline_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Custom_Depth_Highlighter__C__Outline_Opacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Wired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iWired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mWired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Wired_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Wired_Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Mosaic___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Drug___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Alcohol___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Pixel_Dissolve___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Channel_Clamper___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Channel_Swapper___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Bleach_Bypass___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Blur___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Colorize___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Edge_Detect___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_DrmarizedColor___Advanced;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Snow_Speed__Y_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Hard_Emboss___Advanced;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Glitch_Grid_Distortion_Power;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Glitch_Grid_Distortion_Size;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Glitch_Grid_Distortion_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Glitch___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_Monitor_Effects_Tiled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Monitor_Effects___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Hue_Panner___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Monochrome___Advanced;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RadialBlur_MaskDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_Radial_Blur_Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_Radial_Blur_Sample_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Radial_Blur___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Scratches___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Distance_Fog___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Screen_Drops___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Invert___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Kuwahara___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Pulse___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Squares___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Tiles___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_TV_Noise___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Circles___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Sonar___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Distance_Distortion___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Drawing___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Magic_Transitions___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mScreenDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iScreenDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Screen_Damage___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Screen_Decals___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Sharpen___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Toon_Shading___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Anamorphic_Lens_Flares_Tint_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Anamorphic_Lens_Flares___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Frost___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Neon___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeaturesNoCustomDepth Native_Custom_Depth_Highlighter___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeaturesNoCustomDepth Native_Custom_Depth_Highlighter__Clip____Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_N2D_Transform_Background_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_N2D_Transform___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Letterboxing___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Snow___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_World_Splash___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_World_Glitch___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Digitize___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Alarm___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Sketch___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Wired___Advanced;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Comic_Pattern_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Native_Comic_Pattern_Line_Count;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Comic_Pattern_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Comic___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Actor_Featurette;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityActorFeaturette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mActorFeaturette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iActorFeaturette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Actor_Featurette_Background_Multiplier;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Actor_Featurette_Background_Desaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Actor_Featurette_Foreground_Multiplier;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Actor_Featurette_Foreground_Saturation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Actor_Featurette_Blur_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Native_Actor_Featurette_Blur_Samples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Native_Actor_Featurette_Stencil_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeaturesNoCustomDepth Native_Actor_Featurette___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Infected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mInfected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iInfected;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Infected_Distortion_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Infected_Smoothness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Infected_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Infected_TransformZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Infected___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Colored_AO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mColoredAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iColoredAO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Colored_AO_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Colored_AO_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Colored_AO___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Camera_Shake;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iCameraShake;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Camera_Shake_Power__X_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Camera_Shake_Power__Y_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Camera_Shake_Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Camera_Shake___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_StencilEmmisive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mStencilEmmisive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iStencilEmmisive;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityStencilEmmisive;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilEmmisiveStencilNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_StencilEmmisiveColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilEmmisiveStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilEmmisiveNmlDrowStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilEmmisiveNmlBrightnessvalue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_KoratBloom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityKoratBloom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDiscoBall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDiscoBall;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_BloomSumpling;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_BloomAmount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_BloomBrightness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_BloomContrast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_BloomColorIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_BloomBlemdValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_KoratBloom___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonVector3DN Native_Disco_Ball_WS_Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Disco_Ball_Color_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Disco_Ball_Color_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_Disco_Ball_Block_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Disco_Ball_Block_Distribution;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Disco_Ball_Rotation_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Disco_Ball_Manual_Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Disco_Ball___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Para_Lights;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityParaLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mHazyLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iHazyLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonVector2DN Native_Hazy_Lights_Move_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonVector2DN Native_Hazy_Lights_Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Melted_World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mMeltedWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iMeltedWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_Melted_World_Size;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Melted_World_Distance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Melted_World_Power;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Melted_World_Sharpness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Melted_World___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Selective_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacitySelectiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSelectiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSelectiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Selective_Color_Mask_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Selective_Color_Hue_Tolerance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Selective_Color_Saturation_Tolerance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Selective_Color_Value_Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Selective_Color___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_WarpDistortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityWarpDistotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_MaskTex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_Pivot;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FadeFactor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_MaskContrast;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_MaskScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_WarpScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_WarpFactorShift;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_WarpPower;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_TwistAngle;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_TwistFactorShift;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_TwistPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Screen_Fire_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Fire_Distortion_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Fire_Mask_Contrast;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Fire_Mask_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Fire_Flame_Tiling;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Fire_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iScreenFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mScreenFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Screen_Fire___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Haunted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mHaunted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iHaunted;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Haunted_Amount;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Haunted_Mask_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Haunted_Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Haunted_Texture_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Haunted___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Grid_Cell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mGridCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iGridCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Grid_Cell_Animated;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Grid_Cell_Animation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Grid_Cell_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Grid_Cell_Void_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Grid_Cell_Tiling;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Grid_Cell_Transition_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Lens_Distortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mLensDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iLensDistortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Lens_Distortion_Optic_Refinement;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Lens_Distortion_Optic_Size;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Lens_Distortion_Optic_Position_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Lens_Distortion_Optic_Position_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Lens_Distortion_Scope_Texture;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Lens_Distortion_Scope_Texture_Scale_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Lens_Distortion_Scope_Texture_Scale_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Lens_Distortion___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Grid_Cell___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Zone_Center;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Zone_Radius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Zone_Edge_Hardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Zone_Edge_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Zone_Coverage_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Zone___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Drmarize;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityDrmarize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDrmarizeEdgeSampling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDrmarizeLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDrmarizeBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDrmarizeEdgeSampling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDrmarizeLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDrmarizeBlur;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_TypesOfLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_DirectionPivot_XY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_RadualPivot_XY;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SamplesCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_LineDetail;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_LineAnimSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_LineLengthCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Threshold;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Brightness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Contrast;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DetailBlemdValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_WeightPowerCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FadeFactorCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_ImageValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RadualFadeShift;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RadualFadeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Pyramid_Masked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Pyramid_Background_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pyramid_Width;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pyramid_Pan;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Pyramid_Tile_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mPyramid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iPyramid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Drmarize___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Mojo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mMojo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iMojo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Mojo_Animated;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Mojo_Animation_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Mojo_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_Mojo_Distortion_Map;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Mojo_Distortion_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Mojo_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Mojo_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Mojo_Phase;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Mojo_Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Mojo___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Gradient_Fog;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityGradientFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mGradientFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iGradientFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FColor> Native_Gradient_Fog_Colors;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Gradient_Fog_Distance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Gradient_Fog_Sharpness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Gradient_Fog___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* Native_ColorIndexRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_M_ColorIndexer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_I_ColorIndexer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Cross_Glare_Sea_Surface;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityCrossGlareSeaSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mDither;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iDither;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Cross_Glare_Sea_Surface_Threshold;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Cross_Glare_Sea_Surface_MaskStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Cross_Glare_Sea_Surface_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Cross_Glare_Sea_Surface_Steps;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Cross_Glare_Sea_Surface_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Cross_Glow_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Cross_Glow_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Vignette_Mask_Rudius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Vignette_Mask_Density;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VignetteGradient_Offset_X;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_VignetteGradient_Offset_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Cross_Glare_Sea_Surface___Advanced;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Dither_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Dither___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Speed_Lines;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacitySpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSpeedLines_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSpeedLines;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_Intensity;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_PivotX;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_PivotY;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_LineContrast;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_Line_Width;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_Speed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_Mask_Radius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Speed_Lines_Mask_Hardness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Speed_Lines___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_GhostDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mGhostDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iGhostDistortion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_TransFormScaleFactor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_ChameleonOpacityValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_ChameleonOpacityValue_NDF_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Para_Color_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Para_Color_2;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RudiusValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DensityValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_MaskOffsetX;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_MaskOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Para_Lights___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASSMapUltraDynamicSkyActor> Native_FoundDynamicSky;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_SunAngle;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SunAngleStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Native_N1PCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Native_N2PCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Native_SunAngleStrengthCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_AlwaysFalse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Radial_Blur___WorldToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Radial_Blur___Intensity_Distance_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Native_Radial_Blur___Curve_Distance_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_DistortionMap;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_OutlineColor__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineBlendAmount__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineBrightness__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineThickness__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_UseFill__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBlendAmount__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBrightness__S1_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_ColorMap__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_NoiseContrast__S1_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_OutlineColor__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineBlendAmount__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineBrightness__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineThickness__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_UseFill__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBlendAmount__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBrightness__S2_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_ColorMap__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_NoiseContrast__S2_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_OutlineColor__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineBlendAmount__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineBrightness__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OutlineThickness__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_UseFill__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBlendAmount__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBrightness__S3_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_ColorMap__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_NoiseContrast__S3_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo4;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_UseFill__S4_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBlendAmount__S4_;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FillBrightness__S4_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_DevOutline___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iAscii;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mAscii;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_ASCII_Color_Multiplier;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_ASCII_PreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Speed_Lines___WorldToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Speed_Lines___Intensity_Distance_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_Speed_Lines_Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Native_Speed_Lines___Curve_Distance_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mFakeVolumeShadowDrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iFakeVolumeShadowDrow;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityFVS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_FVSPivot_XY;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSColorCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSShadowStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSExcludeEmissive;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSDepthDistance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSDepthInvert;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSFadeShift;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSFadeScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSSamplesCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSLineLengthCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSWeightPowerCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSFadeFactorCommon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_FVS___WorldToScreen;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSPivotX;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSPivotY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_FakeVolumeShadow___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mScreenWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iScreenWaves;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Waves_X_Tiling;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Screen_Waves_Y_Tiling;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo_GhostDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_GDHighColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_GDMidColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_GDLowColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDHighToModBranch;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDMidToLowBranch;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDMinBrightnessClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_GDEdgeColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDEdgeThreshold;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDEdgeEmmisive;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDDistortionDetail;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDAnimSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDDistortion2_Muti;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDImageValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDDetailBlemdValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDBrightness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GDContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Ghost_Distortion___Advanced;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Cyber_Scan_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Drmarize___WorldToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Drmarize___Intensity_Distance_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Native_Drmarize___Curve_Distance_Attenuation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Native_DrmarizeIntensityRateByDist;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSCharaMaskingValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSMapTolerance;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_FVSContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_StaffDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mStaffDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iStaffDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_StaffDistDummyImageA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UTexture2D* Native_StaffDistDummyImageB;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistActiveValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistImageAtoB;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistMaskValue2Dto3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_StaffDistFilterColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_StaffDistAuraColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistBulgeStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistBulgeRenderScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistBulgeTiled;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistAuraSphereMaskRudius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistAuraSphereMaskDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_StaffDistAuraSphereMaskOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_StaffDistAuraUVMapA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_StaffDistAuraUVMapB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_StaffDistAuraUVMapC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_StaffDistAuraUVAnimSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffAuraBrightness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistAuraContrast;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistVignetteRudius;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistVignetteDencity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Native_StaffDistVignetteUVOffset;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StaffDistActiveCapture2D;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_StencilNo_StaffDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Tritone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mTritone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iTritone;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityTritone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_TritoneHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_TritoneMidtone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_TritoneShadow;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_TritoneContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_ChrStencilColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mChrStencilColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iChrStencilColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacityCSC;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_ChrColorStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_BgColorStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_EffColorStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_ScrColorStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_TrsColorStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_HatchingBrendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_CHR1_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_CHR2_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_CHR3_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_CHR4_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_CHR5_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_Bg_LineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_TRS_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_EF1_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_EF2_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_EF3_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_EF4_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_ScreenColor_MinusU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_CSC_ScreenColor_PlusU;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_Edge_Thickness;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_Edge_Line_Scale_Horizon;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_Edge_Line_Scale_Vertical;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_Edge_Coefficient;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_Edge_Line_Sampling_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_SphereGradationStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_HatchRotation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_HatchSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_HatchContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_HatchTexSize;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_TransitionTexAnimation_IN;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_TransitionTexAnimetion_OT;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_RenderingOpacity_CSC_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_1P_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_2P_Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_EffectsColor_45;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_EffectsColor_46;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_EffectsColor_47;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_EffectsColor_48;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Native_CSC_BG_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_OpacityValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_BlackValue_1P;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_BlackValue_2P;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_FlipNumber01;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_FlipNumber02;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_FlipNumber03;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_OUTliner_1P;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CSC_OUTliner_2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_ChrStencilColor___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Iridescent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mIridescent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iIridescent;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Iridescent_Iridescence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Iridescent___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mSketchColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iSketchColor;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_BGPencilValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_CharaPencilValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_CoverColorValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_FlipNumber1P;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_FlipNumber2P;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_CharaCoverColorValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_BGDesaturation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_CharaDesaturation;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_FlipNumberBG;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_FlipNumberCharaOUT;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_FlipNumberObj;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_FlipNumberSky;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_ChrPencilShadowRange;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_ChrEdge_Line_Sampling_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_BGEdge_Line_Sampling_Scale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_SC_ChrPencilRangeContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_SC_EF1_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_SC_EF2_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_SketchColor___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor Native_Sketch_Color;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Kaleidoscope_SphericalDistortion;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Kaleidoscope_Warp;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_Kaleidoscope_FMul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_Kaleidoscope___Advanced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Native_Kaleidoscope_Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iKaleidoscope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_mKaleidoscope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_Kaleidoscope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Native_EffectDetailForTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_iEffectDetailForTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Native_M_EffectDetailForTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSChameleonAdvancedEffectFeatures Native_EffectDetailForTimeScale___Advanced;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_GetEmmisive;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CharaInfluence;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DetailTileX;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_EffectEmissive;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DetailTileY;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DetailAnim;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DetailPower;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_DetailStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_CharaEffectUVScale;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_EffectMaskStrength;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_MonoValue;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_NormalReversePower;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Native_OclusionPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AKoratUDS_Ultra_Dynamic_Sky> Native_FoundKoratUDS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Native_UseSunAngleFromUDS;
    
    ASSChameleonNative(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Native_ZoneFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_WorldSplashFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_WorldGlitchFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_WiredFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_TVNoiseFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ToonShadingFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_TilesFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_SquaresFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_SpeedLinesFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_SonarFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_SnowFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_SketchFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_SharpenFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_SetSunAngleStrength();
    
    UFUNCTION(BlueprintCallable)
    void Native_SetEffectPriority(int32 EffectPriority, UMaterial* Material);
    
    UFUNCTION(BlueprintCallable)
    void Native_SetAdvancedEffectFeaturesNoCustomDepth(const FSSChameleonAdvancedEffectFeaturesNoCustomDepth& Features, UMaterial* Material, UMaterialInstanceDynamic* DynamicMaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void Native_SetAdvancedEffectFeatures(const FSSChameleonAdvancedEffectFeatures& Features, UMaterial* Material, UMaterialInstanceDynamic* DynamicMaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void Native_SelectiveColorFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool Native_SearchKoratUDS();
    
    UFUNCTION(BlueprintCallable)
    bool Native_SearchBGDynamicSky();
    
    UFUNCTION(BlueprintCallable)
    void Native_ScreenWavesFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ScreenFireFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ScreenDropsFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ScreenDecalsFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ScreenDamageFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ScratchesFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_RadialBlurFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_PyramidFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_PulseFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_PixelDissolveFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_NeonFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_N2DTransformFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_MosaicFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_MonochromeFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_MonitorFXFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_MojoFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_MeltedWorldFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_MagicTransitionsFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_LOOKFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_LetterboxingFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_LensFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_KuwaharaFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_KaleidoscopeFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_IridescentFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_InvertFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_InitChameleon();
    
    UFUNCTION(BlueprintCallable)
    void Native_InfectedFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_HuePannerFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_HazyLightsFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_HauntedFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_HardEmbossFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_GridCellFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_GradientFogFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_GlitchFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_GhostDistortionFunk(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_GetSunAngleStrength();
    
    UFUNCTION(BlueprintCallable)
    bool Native_GetSunAngle();
    
    UFUNCTION(BlueprintCallable)
    void Native_FrostFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_EmbossFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_EdgeDetectFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_DrugFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_DrawingFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_DitherFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_DistanceFogFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_DistanceDistortionFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_DiscoBallFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_DigitizeFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_CustomDepthHighlighterNCFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_CustomDepthHighlighterFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_CreateEffectMaterialInstance(UMaterial* Material, UMaterialInstanceDynamic*& Instance);
    
    UFUNCTION(BlueprintCallable)
    void Native_ComicFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ColorizeFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ColoredAOFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_CirclesFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ChannelSwapperFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ChannelClamperFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_CameraShakeFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_BlurFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_BleachFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ASCIIFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ApplyChameleonSettings();
    
    UFUNCTION(BlueprintCallable)
    void Native_AnamorphicLensFlaresFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_AlcoholFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_AlarmFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Native_ActorFeaturetteFunc(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqualWorldToScreenComponent(const UKoratPostProcessWorldToScreenComponent* A, const UKoratPostProcessWorldToScreenComponent* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqualPostProcessSettings(const FPostProcessSettings& A, const FPostProcessSettings& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqualPostProcessComponent(const UPostProcessComponent* A, const UPostProcessComponent* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqualMaterialArray(const TArray<UMaterial*>& A, const TArray<UMaterial*>& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqualColorArray(const TArray<FColor>& A, const TArray<FColor>& B);
    
    UFUNCTION(BlueprintCallable)
    static void CopyWorldToScreenComponent(const UKoratPostProcessWorldToScreenComponent* A, UKoratPostProcessWorldToScreenComponent* B);
    
    UFUNCTION(BlueprintCallable)
    static void CopyPostProcessComponent(const UPostProcessComponent* A, UPostProcessComponent* B);
    
};

