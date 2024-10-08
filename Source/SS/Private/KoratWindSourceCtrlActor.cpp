#include "KoratWindSourceCtrlActor.h"

AKoratWindSourceCtrlActor::AKoratWindSourceCtrlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWindControlEnable = true;
    this->TreeWindMPC = NULL;
}

void AKoratWindSourceCtrlActor::GetPointWindData(TArray<FKoratWindData>& OutWindData) const {
}

int32 AKoratWindSourceCtrlActor::GetDirectionalWindParameter(FVector& OutDirection, float& OutSpeed, float& OutMinGustAmt, float& OutMaxGustAmt, float& OutTotalWeight) const {
    return 0;
}

void AKoratWindSourceCtrlActor::ApplyDirectionalWindToMPC() const {
}


