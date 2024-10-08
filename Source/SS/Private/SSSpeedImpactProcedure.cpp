#include "SSSpeedImpactProcedure.h"

ASSSpeedImpactProcedure::ASSSpeedImpactProcedure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Intro1SocketName = TEXT("socket_Act_SPF1_1P");
    this->Intro2SocketName = TEXT("socket_Act_SPF2_2P");
    this->Game1SocketName = TEXT("socket_Act_SPF1C_1P");
    this->Game2SocketName = TEXT("socket_Act_SPF2C_2P");
    this->Win1SocketName = TEXT("socket_Act_SPF1W_1P");
    this->Lose2SocketName = TEXT("socket_Act_SPF2L_2P");
    this->Lose1SocketName = TEXT("socket_Act_SPF1L_1P");
    this->Win2SocketName = TEXT("socket_Act_SPF2W_2P");
    this->RiseValue = 0.00f;
}

void ASSSpeedImpactProcedure::UpdateGameSelf(float DeltaSecond) {
}

void ASSSpeedImpactProcedure::UpdateEffectTransform() {
}

void ASSSpeedImpactProcedure::SetupIntroPosition() {
}

void ASSSpeedImpactProcedure::SetupImpl() {
}

void ASSSpeedImpactProcedure::SetupGamePosition() {
}

void ASSSpeedImpactProcedure::SetupFinishPosition() {
}

void ASSSpeedImpactProcedure::RequestPositionSetImpl(float TravelTime) {
}



