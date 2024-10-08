#include "KoratUDS_Ultra_Dynamic_Sky_Ex.h"

AKoratUDS_Ultra_Dynamic_Sky_Ex::AKoratUDS_Ultra_Dynamic_Sky_Ex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MobilePlatforms.AddDefaulted(2);
    this->Months.AddDefaulted(12);
    this->Months_LeapYear.AddDefaulted(12);
    this->CloudWholeRotationSpeed = 0.00f;
    this->CloudVortexRotationSpeed = 0.00f;
    this->CloudVortexTimeBase = 0.00f;
    this->CloudVortexTimePeriod = 15.00f;
    this->CloudVortexAttenuationLUTScale = 0.20f;
    this->CloudWholeRotationAngle = 0.00f;
    this->CloudVortexTimeProgress = 0.00f;
    this->Map000_Sky_Ratio = 1.00f;
    this->Moon1RotationAngle = 0.00f;
    this->Moon1Intensity = 1.00f;
    this->Moon1MaskTransparency = 1.00f;
    this->Moon1Radius = 10.00f;
    this->Moon1Density = 10.00f;
    this->Moon2RotationAngle = 0.00f;
    this->Moon2Intensity = 1.00f;
    this->Moon2MaskTransparency = 1.00f;
    this->Moon2Radius = 10.00f;
    this->Moon2Density = 10.00f;
    this->Moon3RotationAngle = 0.00f;
    this->Moon3Intensity = 1.00f;
    this->Moon3MaskTransparency = 1.00f;
    this->Moon3Radius = 10.00f;
    this->Moon3Density = 10.00f;
    this->bMap000_RealtimeUpdate = false;
    this->Map000_Cloud_Ratio = 1.00f;
    this->CloudFarRotationSpeed = 1.00f;
    this->CloudFarIntensity = 1.00f;
    this->CloudFarMaskIntensity = 1.00f;
    this->CloudFarTransparency = 1.00f;
    this->CloudNearRotationSpeed = 2.00f;
    this->CloudNearIntensity = 1.00f;
    this->CloudNearMaskIntensity = 1.00f;
    this->CloudNearTransparency = 1.00f;
    this->CloudThinRotationSpeed = 0.50f;
    this->CloudThinIntensity = 1.00f;
    this->CloudThinMaskIntensity = 1.00f;
    this->CloudThinTransparency = 0.00f;
    this->CloudTopRotationSpeed = 5.00f;
    this->CloudTopIntensity = 1.00f;
    this->CloudTopMaskIntensity = 1.00f;
    this->CloudTopTransparency = 1.00f;
    this->CloudFarRotationAngle = 0.00f;
    this->CloudNearRotationAngle = 0.00f;
    this->CloudThinRotationAngle = 0.00f;
    this->CloudTopRotationAngle = 0.00f;
    this->CloudColorDensity = 4.40f;
    this->BottomColorBlend = 16.00f;
    this->CloudHight = 2.00f;
    this->CloudContrast = 1.00f;
    this->DistanceCloudColor = 0.01f;
    this->DistanceCloudContrast = 0.00f;
    this->CustomCloudShadowSpeed = 0.00f;
    this->CustomCloudShadowDirection = 0.00f;
    this->CustomCloudShadowDetail1Strength = 7.21f;
    this->CustomCloudShadowDetail2Strength = 0.64f;
    this->CustomCloudShadowContrast = 0.45f;
    this->CustomCloudShadowRangeRadius = 1.00f;
    this->CustomCloudShadowRangeDensity = 4.00f;
    this->CustomCloudShadowHorizontalSpeed = 0.10f;
    this->CustomCloudShadowOverallBrightness = 1.00f;
    this->OvercastSwirlContrastOrigin = 0.50f;
    this->OvercastSwirlContrastScale = 1.00f;
    this->FogMaxOpacity = 1.00f;
}

void AKoratUDS_Ultra_Dynamic_Sky_Ex::CustomVolumeCloudParameter() {
}


