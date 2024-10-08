#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EKoratUltraDynamicSkyNative.h"
#include "UltraDynamicSkyCurveParamNative.h"
#include "UltraDynamicSkyParamNative.h"
#include "UltraDynamicSkyParam_2D_DynamicClouds.h"
#include "UltraDynamicSkyParam_2D_DynamicClouds_Curve.h"
#include "UltraDynamicSkyParam_BasicControls.h"
#include "UltraDynamicSkyParam_BasicControls_Curve.h"
#include "UltraDynamicSkyParam_CloudVortex.h"
#include "UltraDynamicSkyParam_CloudVortex_Curve.h"
#include "UltraDynamicSkyParam_CloudWisps.h"
#include "UltraDynamicSkyParam_CloudWisps_Curve.h"
#include "UltraDynamicSkyParam_CustomCloudShadow.h"
#include "UltraDynamicSkyParam_CustomCloudShadow_Curve.h"
#include "UltraDynamicSkyParam_CustomVolumetricCloudsParameter.h"
#include "UltraDynamicSkyParam_CustomVolumetricCloudsParameter_Curve.h"
#include "UltraDynamicSkyParam_Dust.h"
#include "UltraDynamicSkyParam_Dust_Curve.h"
#include "UltraDynamicSkyParam_FogColor.h"
#include "UltraDynamicSkyParam_FogColor_Curve.h"
#include "UltraDynamicSkyParam_FogDensity.h"
#include "UltraDynamicSkyParam_FogDensity_Curve.h"
#include "UltraDynamicSkyParam_LightShafts.h"
#include "UltraDynamicSkyParam_LightShafts_Curve.h"
#include "UltraDynamicSkyParam_Map000_Cloud.h"
#include "UltraDynamicSkyParam_Map000_Cloud_Curve.h"
#include "UltraDynamicSkyParam_Map000_Sky.h"
#include "UltraDynamicSkyParam_Map000_Sky_Curve.h"
#include "UltraDynamicSkyParam_SimplifiedColor.h"
#include "UltraDynamicSkyParam_SimplifiedColor_Curve.h"
#include "UltraDynamicSkyParam_SkyLight.h"
#include "UltraDynamicSkyParam_SkyLight_Curve.h"
#include "UltraDynamicSkyParam_Sun.h"
#include "UltraDynamicSkyParam_Sun_Curve.h"
#include "UltraDynamicSkyParam_VolumetricClouds.h"
#include "UltraDynamicSkyParam_VolumetricClouds_Curve.h"
#include "KoratUDS_WeatherParamControlActor.generated.h"

class AKoratUDS_Ultra_Dynamic_Sky_Ex;
class UCurveFloat;

UCLASS(Blueprintable)
class AKoratUDS_WeatherParamControlActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratUltraDynamicSkyNative, FUltraDynamicSkyParamNative> MapSTDataNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUltraDynamicSkyCurveParamNative> CurveParamTableNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUltraDynamicSkyNative StartNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUltraDynamicSkyNative EndNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParamNative ApplytParamNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyCurveParamNative CurveParamNative;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WeatherRateNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateFlagNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKoratUDS_Ultra_Dynamic_Sky_Ex* UDSNative;
    
public:
    AKoratUDS_WeatherParamControlActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateNative(const double InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricCloudsNative(const FUltraDynamicSkyParam_VolumetricClouds& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetupParamNative(const EKoratUltraDynamicSkyNative InStart, const EKoratUltraDynamicSkyNative InEnd, const int32 InterpTableIndex, const bool bInResetRate);
    
    UFUNCTION(BlueprintCallable)
    void SetupCurrentParamByArrayNative(const int32 StartArrayIndex, const int32 EndArrayIndex, const int32 InInterpArrayIndex, const bool InbResetRate);
    
    UFUNCTION(BlueprintCallable)
    void SetupCurrentParamAndParamByArrayNative(const int32 EndArrayIndex, const int32 InInterpArrayIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSunNative(const FUltraDynamicSkyParam_Sun& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyLightNative(const FUltraDynamicSkyParam_SkyLight& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSimplifiedColorNative(const FUltraDynamicSkyParam_SimplifiedColor& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetParamUDS(const FUltraDynamicSkyParamNative& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetParam_UltraDynamicSkyParamEdit(const FUltraDynamicSkyParamNative& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetMap000_SkyNative(const FUltraDynamicSkyParam_Map000_Sky& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetMap000_CloudNative(const FUltraDynamicSkyParam_Map000_Cloud& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetLightShaftsNative(const FUltraDynamicSkyParam_LightShafts& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetFogDensityNative(const FUltraDynamicSkyParam_FogDensity& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetFogColorNative(const FUltraDynamicSkyParam_FogColor& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetDustNative(const FUltraDynamicSkyParam_Dust& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomVolumetricCloudsParameterNative(const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomCloudShadowNative(const FUltraDynamicSkyParam_CustomCloudShadow& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCloudVortexNative(const FUltraDynamicSkyParam_CloudVortex& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetCloud_WispsNative(const FUltraDynamicSkyParam_CloudWisps& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetBasicControlsNative(const FUltraDynamicSkyParam_BasicControls& InParam);
    
    UFUNCTION(BlueprintCallable)
    void Set2DDynamicCloudsNative(const FUltraDynamicSkyParam_2D_DynamicClouds& InParam);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_VolumetricClouds RateVolumetricCloudsNative(const FUltraDynamicSkyParam_VolumetricClouds& InStart, const FUltraDynamicSkyParam_VolumetricClouds& InEnd, const FUltraDynamicSkyParam_VolumetricClouds_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FVector2D RateVector2DNative(const FVector2D& InStart, const FVector2D& InEnd, const double InRate, const UCurveFloat* InCurveFloat);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Sun RateSunNative(const FUltraDynamicSkyParam_Sun& InStart, const FUltraDynamicSkyParam_Sun& InEnd, const FUltraDynamicSkyParam_Sun_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_SkyLight RateSkyLightNative(const FUltraDynamicSkyParam_SkyLight& InStart, const FUltraDynamicSkyParam_SkyLight& InEnd, const FUltraDynamicSkyParam_SkyLight_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_SimplifiedColor RateSimplifiedColorNative(const FUltraDynamicSkyParam_SimplifiedColor& InStart, const FUltraDynamicSkyParam_SimplifiedColor& InEnd, const FUltraDynamicSkyParam_SimplifiedColor_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParamNative RateParamNative(const FUltraDynamicSkyParamNative& InStartParam, const FUltraDynamicSkyParamNative& InEndParam, const FUltraDynamicSkyCurveParamNative& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Map000_Sky RateMap000_SkyNative(const FUltraDynamicSkyParam_Map000_Sky& InStart, const FUltraDynamicSkyParam_Map000_Sky& InEnd, const FUltraDynamicSkyParam_Map000_Sky_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Map000_Cloud RateMap000_CloudNative(const FUltraDynamicSkyParam_Map000_Cloud& InStart, const FUltraDynamicSkyParam_Map000_Cloud& InEnd, const FUltraDynamicSkyParam_Map000_Cloud_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_LightShafts RateLightShaftsNative(const FUltraDynamicSkyParam_LightShafts& InStart, const FUltraDynamicSkyParam_LightShafts& InEnd, const FUltraDynamicSkyParam_LightShafts_Curve& InCuve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_FogDensity RateFogDensityNative(const FUltraDynamicSkyParam_FogDensity& InStart, const FUltraDynamicSkyParam_FogDensity& InEnd, const FUltraDynamicSkyParam_FogDensity_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_FogColor RateFogColorNative(const FUltraDynamicSkyParam_FogColor& InStart, const FUltraDynamicSkyParam_FogColor& InEnd, const FUltraDynamicSkyParam_FogColor_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    double RateFloatNative(const double InStart, const double InEnd, const double InRate, const UCurveFloat* InCurveFloat);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Dust RateDustNative(const FUltraDynamicSkyParam_Dust& InStart, const FUltraDynamicSkyParam_Dust& InEnd, const FUltraDynamicSkyParam_Dust_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CustomVolumetricCloudsParameter RateCustomVolumetricCloudsParameterNative(const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter& InStart, const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter& InEnd, const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CustomCloudShadow RateCustomCloudShadowNative(const FUltraDynamicSkyParam_CustomCloudShadow& InStart, const FUltraDynamicSkyParam_CustomCloudShadow& InEnd, const FUltraDynamicSkyParam_CustomCloudShadow_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor RateColorNative(const FLinearColor& InStart, const FLinearColor& InEnd, const double InRate, const UCurveFloat* InCurveFloat);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CloudVortex RateCloudVortexNative(const FUltraDynamicSkyParam_CloudVortex& InStart, const FUltraDynamicSkyParam_CloudVortex& InEnd, const FUltraDynamicSkyParam_CloudVortex_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CloudWisps RateCloud_WispsNative(const FUltraDynamicSkyParam_CloudWisps& InStart, const FUltraDynamicSkyParam_CloudWisps& InEnd, const FUltraDynamicSkyParam_CloudWisps_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    bool RateBoolNative(const bool InbStart, const bool InbEnd, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_BasicControls RateBasicControlsNative(const FUltraDynamicSkyParam_BasicControls& InStart, const FUltraDynamicSkyParam_BasicControls& InEnd, const FUltraDynamicSkyParam_BasicControls_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_2D_DynamicClouds Rate2DDynamicCloudsNative(const FUltraDynamicSkyParam_2D_DynamicClouds& InStart, const FUltraDynamicSkyParam_2D_DynamicClouds& InEnd, const FUltraDynamicSkyParam_2D_DynamicClouds_Curve& InCurve, const double InRate);
    
    UFUNCTION(BlueprintCallable)
    void LoadParamFormUDS(EKoratUltraDynamicSkyNative InType);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_VolumetricClouds GetVolumetricCloudsNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Sun GetSunNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_SkyLight GetSkyLightNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_SimplifiedColor GetSimplifiedColorNative();
    
    UFUNCTION(BlueprintCallable)
    double GetRateFromCurve(const double InRate, const UCurveFloat* InCurveFloat);
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParamNative GetParamFromUDS();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Map000_Sky GetMap000_SkyNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Map000_Cloud GetMap000_CloudNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_LightShafts GetLightShaftsNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_FogDensity GetFogDensityNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_FogColor GetFogColorNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_Dust GetDustNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CustomVolumetricCloudsParameter GetCustomVolumetricCloudsParameterNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CustomCloudShadow GetCustomCloudShadowNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CloudVortex GetCloudVortexNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_CloudWisps GetCloud_WispsNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_BasicControls GetBasicControlsNative();
    
    UFUNCTION(BlueprintCallable)
    FUltraDynamicSkyParam_2D_DynamicClouds Get2DDynamicCloudsNative();
    
};

