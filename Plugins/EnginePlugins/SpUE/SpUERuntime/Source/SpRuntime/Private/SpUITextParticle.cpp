#include "SpUITextParticle.h"
#include "Components/SlateWrapperTypes.h"

USpUITextParticle::USpUITextParticle() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->bAutoStart = false;
    this->bGeometryFollow = true;
    this->LoopType = ESpUIParticleType::Once;
    this->ParticleMax = 1;
    this->TickMin = 1;
    this->TickMax = 1;
    this->LifeTimeMin = 1.00f;
    this->LifeTimeMax = 1.00f;
    this->MoveMin = 0.00f;
    this->MoveMax = 0.00f;
    this->ScaleMin = 1.00f;
    this->ScaleMax = 1.00f;
    this->InjectionAngle = 0;
    this->InjectionHalfArc = 180;
    this->MoveChangeBegin = 0.00f;
    this->MoveChangeEnd = 1.00f;
    this->BeginMove = 1.00f;
    this->EndMove = 1.00f;
    this->ScaleChangeBegin = 0.00f;
    this->ScaleChangeEnd = 1.00f;
    this->BeginScale = 1.00f;
    this->EndScale = 1.00f;
    this->ColorChangeBegin = 0.00f;
    this->ColorChangeEnd = 1.00f;
}

void USpUITextParticle::StopParticle(const bool bInForce) {
}

void USpUITextParticle::StartParticle() {
}

void USpUITextParticle::SetParticleTextArray(const TArray<FText>& InTextArray) {
}

void USpUITextParticle::SetParticlePosition(const FVector2D InPosition) {
}

void USpUITextParticle::SetParticleInjectionAngle(const int32 InAngle, const int32 InHalfArc) {
}


