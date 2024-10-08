#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "KoratUDS_Ultra_Dynamic_Sky.h"
#include "KoratUDS_Ultra_Dynamic_Sky_Ex.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class KORATUDS_API AKoratUDS_Ultra_Dynamic_Sky_Ex : public AKoratUDS_Ultra_Dynamic_Sky {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudWholeRotationCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudWholeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudVortexCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexTimeBase;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexTimePeriod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexAttenuationLUTScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudVortexAttenuationLUT;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudWholeRotationAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudVortexTimeProgress;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Map000_Sky_Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BaseSkyUVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BaseSkyTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Moon1UVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Moon1UVTranslation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon1RotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Moon1Texture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon1Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Moon1ColorDetail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon1MaskTransparency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon1Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon1Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Moon2UVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Moon2UVTranslation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon2RotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Moon2Texture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon2Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Moon2ColorDetail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon2MaskTransparency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon2Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon2Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Moon3UVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Moon3UVTranslation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon3RotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Moon3Texture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon3Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Moon3ColorDetail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon3MaskTransparency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon3Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Moon3Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bMap000_RealtimeUpdate;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Map000_Cloud_Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudBaseColorAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudFarUVScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudFarTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudNearUVScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudNearTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudThinUVScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudThinTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinTransparency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CloudTopUVScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudTopTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopMaskIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopTransparency;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudFarRotationAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudNearRotationAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudThinRotationAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTopRotationAngle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudLightColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudDarkColor2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudColorDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TopCloudColor_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MiddleCloudColor_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BottomCloudColor_Near;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TopCloudColor_Far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MiddleCloudColor_Far;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BottomCloudColor_Far;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BottomColorBlend;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudHight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudContrast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceCloudColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceCloudContrast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowDetail1Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowDetail2Strength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowContrast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowRangeRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowRangeDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowHorizontalSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CustomCloudShadowOverallBrightness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastSwirlContrastOrigin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastSwirlContrastScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogMaxOpacity;
    
    AKoratUDS_Ultra_Dynamic_Sky_Ex(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void CustomVolumeCloudParameter();
    
};

