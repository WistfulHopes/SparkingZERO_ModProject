#include "KoratUDS_WeatherParamControlActor.h"

AKoratUDS_WeatherParamControlActor::AKoratUDS_WeatherParamControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartNative = EKoratUltraDynamicSkyNative::Normal;
    this->EndNative = EKoratUltraDynamicSkyNative::CloudType1;
    this->WeatherRateNative = 0.00f;
    this->bUpdateFlagNative = false;
    this->UDSNative = NULL;
}

void AKoratUDS_WeatherParamControlActor::UpdateNative(const double InRate) {
}

void AKoratUDS_WeatherParamControlActor::SetVolumetricCloudsNative(const FUltraDynamicSkyParam_VolumetricClouds& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetupParamNative(const EKoratUltraDynamicSkyNative InStart, const EKoratUltraDynamicSkyNative InEnd, const int32 InterpTableIndex, const bool bInResetRate) {
}

void AKoratUDS_WeatherParamControlActor::SetupCurrentParamByArrayNative(const int32 StartArrayIndex, const int32 EndArrayIndex, const int32 InInterpArrayIndex, const bool InbResetRate) {
}

void AKoratUDS_WeatherParamControlActor::SetupCurrentParamAndParamByArrayNative(const int32 EndArrayIndex, const int32 InInterpArrayIndex) {
}

void AKoratUDS_WeatherParamControlActor::SetSunNative(const FUltraDynamicSkyParam_Sun& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetSkyLightNative(const FUltraDynamicSkyParam_SkyLight& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetSimplifiedColorNative(const FUltraDynamicSkyParam_SimplifiedColor& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetParamUDS(const FUltraDynamicSkyParamNative& InParam) {
}


void AKoratUDS_WeatherParamControlActor::SetMap000_SkyNative(const FUltraDynamicSkyParam_Map000_Sky& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetMap000_CloudNative(const FUltraDynamicSkyParam_Map000_Cloud& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetLightShaftsNative(const FUltraDynamicSkyParam_LightShafts& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetFogDensityNative(const FUltraDynamicSkyParam_FogDensity& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetFogColorNative(const FUltraDynamicSkyParam_FogColor& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetDustNative(const FUltraDynamicSkyParam_Dust& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetCustomVolumetricCloudsParameterNative(const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetCustomCloudShadowNative(const FUltraDynamicSkyParam_CustomCloudShadow& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetCloudVortexNative(const FUltraDynamicSkyParam_CloudVortex& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetCloud_WispsNative(const FUltraDynamicSkyParam_CloudWisps& InParam) {
}

void AKoratUDS_WeatherParamControlActor::SetBasicControlsNative(const FUltraDynamicSkyParam_BasicControls& InParam) {
}

void AKoratUDS_WeatherParamControlActor::Set2DDynamicCloudsNative(const FUltraDynamicSkyParam_2D_DynamicClouds& InParam) {
}

FUltraDynamicSkyParam_VolumetricClouds AKoratUDS_WeatherParamControlActor::RateVolumetricCloudsNative(const FUltraDynamicSkyParam_VolumetricClouds& InStart, const FUltraDynamicSkyParam_VolumetricClouds& InEnd, const FUltraDynamicSkyParam_VolumetricClouds_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_VolumetricClouds{};
}

FVector2D AKoratUDS_WeatherParamControlActor::RateVector2DNative(const FVector2D& InStart, const FVector2D& InEnd, const double InRate, const UCurveFloat* InCurveFloat) {
    return FVector2D{};
}

FUltraDynamicSkyParam_Sun AKoratUDS_WeatherParamControlActor::RateSunNative(const FUltraDynamicSkyParam_Sun& InStart, const FUltraDynamicSkyParam_Sun& InEnd, const FUltraDynamicSkyParam_Sun_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_Sun{};
}

FUltraDynamicSkyParam_SkyLight AKoratUDS_WeatherParamControlActor::RateSkyLightNative(const FUltraDynamicSkyParam_SkyLight& InStart, const FUltraDynamicSkyParam_SkyLight& InEnd, const FUltraDynamicSkyParam_SkyLight_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_SkyLight{};
}

FUltraDynamicSkyParam_SimplifiedColor AKoratUDS_WeatherParamControlActor::RateSimplifiedColorNative(const FUltraDynamicSkyParam_SimplifiedColor& InStart, const FUltraDynamicSkyParam_SimplifiedColor& InEnd, const FUltraDynamicSkyParam_SimplifiedColor_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_SimplifiedColor{};
}

FUltraDynamicSkyParamNative AKoratUDS_WeatherParamControlActor::RateParamNative(const FUltraDynamicSkyParamNative& InStartParam, const FUltraDynamicSkyParamNative& InEndParam, const FUltraDynamicSkyCurveParamNative& InCurve, const double InRate) {
    return FUltraDynamicSkyParamNative{};
}

FUltraDynamicSkyParam_Map000_Sky AKoratUDS_WeatherParamControlActor::RateMap000_SkyNative(const FUltraDynamicSkyParam_Map000_Sky& InStart, const FUltraDynamicSkyParam_Map000_Sky& InEnd, const FUltraDynamicSkyParam_Map000_Sky_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_Map000_Sky{};
}

FUltraDynamicSkyParam_Map000_Cloud AKoratUDS_WeatherParamControlActor::RateMap000_CloudNative(const FUltraDynamicSkyParam_Map000_Cloud& InStart, const FUltraDynamicSkyParam_Map000_Cloud& InEnd, const FUltraDynamicSkyParam_Map000_Cloud_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_Map000_Cloud{};
}

FUltraDynamicSkyParam_LightShafts AKoratUDS_WeatherParamControlActor::RateLightShaftsNative(const FUltraDynamicSkyParam_LightShafts& InStart, const FUltraDynamicSkyParam_LightShafts& InEnd, const FUltraDynamicSkyParam_LightShafts_Curve& InCuve, const double InRate) {
    return FUltraDynamicSkyParam_LightShafts{};
}

FUltraDynamicSkyParam_FogDensity AKoratUDS_WeatherParamControlActor::RateFogDensityNative(const FUltraDynamicSkyParam_FogDensity& InStart, const FUltraDynamicSkyParam_FogDensity& InEnd, const FUltraDynamicSkyParam_FogDensity_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_FogDensity{};
}

FUltraDynamicSkyParam_FogColor AKoratUDS_WeatherParamControlActor::RateFogColorNative(const FUltraDynamicSkyParam_FogColor& InStart, const FUltraDynamicSkyParam_FogColor& InEnd, const FUltraDynamicSkyParam_FogColor_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_FogColor{};
}

double AKoratUDS_WeatherParamControlActor::RateFloatNative(const double InStart, const double InEnd, const double InRate, const UCurveFloat* InCurveFloat) {
    return 0.0;
}

FUltraDynamicSkyParam_Dust AKoratUDS_WeatherParamControlActor::RateDustNative(const FUltraDynamicSkyParam_Dust& InStart, const FUltraDynamicSkyParam_Dust& InEnd, const FUltraDynamicSkyParam_Dust_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_Dust{};
}

FUltraDynamicSkyParam_CustomVolumetricCloudsParameter AKoratUDS_WeatherParamControlActor::RateCustomVolumetricCloudsParameterNative(const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter& InStart, const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter& InEnd, const FUltraDynamicSkyParam_CustomVolumetricCloudsParameter_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_CustomVolumetricCloudsParameter{};
}

FUltraDynamicSkyParam_CustomCloudShadow AKoratUDS_WeatherParamControlActor::RateCustomCloudShadowNative(const FUltraDynamicSkyParam_CustomCloudShadow& InStart, const FUltraDynamicSkyParam_CustomCloudShadow& InEnd, const FUltraDynamicSkyParam_CustomCloudShadow_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_CustomCloudShadow{};
}

FLinearColor AKoratUDS_WeatherParamControlActor::RateColorNative(const FLinearColor& InStart, const FLinearColor& InEnd, const double InRate, const UCurveFloat* InCurveFloat) {
    return FLinearColor{};
}

FUltraDynamicSkyParam_CloudVortex AKoratUDS_WeatherParamControlActor::RateCloudVortexNative(const FUltraDynamicSkyParam_CloudVortex& InStart, const FUltraDynamicSkyParam_CloudVortex& InEnd, const FUltraDynamicSkyParam_CloudVortex_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_CloudVortex{};
}

FUltraDynamicSkyParam_CloudWisps AKoratUDS_WeatherParamControlActor::RateCloud_WispsNative(const FUltraDynamicSkyParam_CloudWisps& InStart, const FUltraDynamicSkyParam_CloudWisps& InEnd, const FUltraDynamicSkyParam_CloudWisps_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_CloudWisps{};
}

bool AKoratUDS_WeatherParamControlActor::RateBoolNative(const bool InbStart, const bool InbEnd, const double InRate) {
    return false;
}

FUltraDynamicSkyParam_BasicControls AKoratUDS_WeatherParamControlActor::RateBasicControlsNative(const FUltraDynamicSkyParam_BasicControls& InStart, const FUltraDynamicSkyParam_BasicControls& InEnd, const FUltraDynamicSkyParam_BasicControls_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_BasicControls{};
}

FUltraDynamicSkyParam_2D_DynamicClouds AKoratUDS_WeatherParamControlActor::Rate2DDynamicCloudsNative(const FUltraDynamicSkyParam_2D_DynamicClouds& InStart, const FUltraDynamicSkyParam_2D_DynamicClouds& InEnd, const FUltraDynamicSkyParam_2D_DynamicClouds_Curve& InCurve, const double InRate) {
    return FUltraDynamicSkyParam_2D_DynamicClouds{};
}

void AKoratUDS_WeatherParamControlActor::LoadParamFormUDS(EKoratUltraDynamicSkyNative InType) {
}

FUltraDynamicSkyParam_VolumetricClouds AKoratUDS_WeatherParamControlActor::GetVolumetricCloudsNative() {
    return FUltraDynamicSkyParam_VolumetricClouds{};
}

FUltraDynamicSkyParam_Sun AKoratUDS_WeatherParamControlActor::GetSunNative() {
    return FUltraDynamicSkyParam_Sun{};
}

FUltraDynamicSkyParam_SkyLight AKoratUDS_WeatherParamControlActor::GetSkyLightNative() {
    return FUltraDynamicSkyParam_SkyLight{};
}

FUltraDynamicSkyParam_SimplifiedColor AKoratUDS_WeatherParamControlActor::GetSimplifiedColorNative() {
    return FUltraDynamicSkyParam_SimplifiedColor{};
}

double AKoratUDS_WeatherParamControlActor::GetRateFromCurve(const double InRate, const UCurveFloat* InCurveFloat) {
    return 0.0;
}

FUltraDynamicSkyParamNative AKoratUDS_WeatherParamControlActor::GetParamFromUDS() {
    return FUltraDynamicSkyParamNative{};
}

FUltraDynamicSkyParam_Map000_Sky AKoratUDS_WeatherParamControlActor::GetMap000_SkyNative() {
    return FUltraDynamicSkyParam_Map000_Sky{};
}

FUltraDynamicSkyParam_Map000_Cloud AKoratUDS_WeatherParamControlActor::GetMap000_CloudNative() {
    return FUltraDynamicSkyParam_Map000_Cloud{};
}

FUltraDynamicSkyParam_LightShafts AKoratUDS_WeatherParamControlActor::GetLightShaftsNative() {
    return FUltraDynamicSkyParam_LightShafts{};
}

FUltraDynamicSkyParam_FogDensity AKoratUDS_WeatherParamControlActor::GetFogDensityNative() {
    return FUltraDynamicSkyParam_FogDensity{};
}

FUltraDynamicSkyParam_FogColor AKoratUDS_WeatherParamControlActor::GetFogColorNative() {
    return FUltraDynamicSkyParam_FogColor{};
}

FUltraDynamicSkyParam_Dust AKoratUDS_WeatherParamControlActor::GetDustNative() {
    return FUltraDynamicSkyParam_Dust{};
}

FUltraDynamicSkyParam_CustomVolumetricCloudsParameter AKoratUDS_WeatherParamControlActor::GetCustomVolumetricCloudsParameterNative() {
    return FUltraDynamicSkyParam_CustomVolumetricCloudsParameter{};
}

FUltraDynamicSkyParam_CustomCloudShadow AKoratUDS_WeatherParamControlActor::GetCustomCloudShadowNative() {
    return FUltraDynamicSkyParam_CustomCloudShadow{};
}

FUltraDynamicSkyParam_CloudVortex AKoratUDS_WeatherParamControlActor::GetCloudVortexNative() {
    return FUltraDynamicSkyParam_CloudVortex{};
}

FUltraDynamicSkyParam_CloudWisps AKoratUDS_WeatherParamControlActor::GetCloud_WispsNative() {
    return FUltraDynamicSkyParam_CloudWisps{};
}

FUltraDynamicSkyParam_BasicControls AKoratUDS_WeatherParamControlActor::GetBasicControlsNative() {
    return FUltraDynamicSkyParam_BasicControls{};
}

FUltraDynamicSkyParam_2D_DynamicClouds AKoratUDS_WeatherParamControlActor::Get2DDynamicCloudsNative() {
    return FUltraDynamicSkyParam_2D_DynamicClouds{};
}


