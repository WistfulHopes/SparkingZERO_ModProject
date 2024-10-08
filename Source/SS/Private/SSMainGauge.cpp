#include "SSMainGauge.h"

USSMainGauge::USSMainGauge() {
    this->FaceChipMaterial = NULL;
    this->HPGauge = NULL;
    this->HPStockSet = NULL;
    this->SpecialGaugeSet = NULL;
    this->SPGauge = NULL;
    this->SparkingGauge = NULL;
    this->BlastGauge = NULL;
    this->UserNameText = NULL;
    this->GaugeTrackingWidget = NULL;
    this->GaugeTrackingImage = NULL;
    this->TeamGauge = NULL;
    this->StyleIconTimer = NULL;
    this->CanvasPanel = NULL;
}

void USSMainGauge::StopSparkingMode() {
}

void USSMainGauge::StartSparkingMode() {
}

void USSMainGauge::StartDamage() {
}

void USSMainGauge::SetUserName(const FString& InUserName) {
}

void USSMainGauge::SetFaceChipImageTexture(UTexture* InTexture) {
}







void USSMainGauge::HpGaugeChange(float InPercentage) {
}

USSTeamGauge* USSMainGauge::GetTeamGauge() {
    return NULL;
}

USSSPGauge* USSMainGauge::GetSPGauge() {
    return NULL;
}

USSSparkingGauge* USSMainGauge::GetSparkingGauge() {
    return NULL;
}

USSHPStockSet* USSMainGauge::GetHPStockSet() {
    return NULL;
}

USSHPGauge* USSMainGauge::GetHPGauge() {
    return NULL;
}

USSBlastGauge* USSMainGauge::GetBlastGauge() {
    return NULL;
}


