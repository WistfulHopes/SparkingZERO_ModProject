#include "SSHPGauge.h"

USSHPGauge::USSHPGauge() {
    this->HPPerGauge = 10000.00f;
    this->DamageGaugeReduceSpeed = 10000.00f;
    this->DamageDelaySec = 0.00f;
    this->NextBarImage = NULL;
    this->CurrentGaugeImage = NULL;
    this->NextBarEffectMaterial = NULL;
    this->DamageGaugeEffectMaterial = NULL;
    this->OverDamageGaugeEffectMaterial = NULL;
    this->CurrentGaugeEffectMaterial = NULL;
    this->GaugeBoarderEffectWidget = NULL;
    this->GaugeTrackingWidget = NULL;
}

void USSHPGauge::SetHPPerGauge(float InHPPerGauge) {
}

void USSHPGauge::SetHP(float InHP) {
}

void USSHPGauge::SetDamageAmount(float InDamageAmount) {
}

void USSHPGauge::ReceivedDamage(float InDamage) {
}

bool USSHPGauge::IsAnimatingDamage() {
    return false;
}

int32 USSHPGauge::GetHPStockNum() {
    return 0;
}

float USSHPGauge::GetHPPerGauge() const {
    return 0.0f;
}

void USSHPGauge::CancelDamageAnimation() {
}

void USSHPGauge::AnimateDamage() {
}

void USSHPGauge::AddDamage(float InDamageAmount) {
}


