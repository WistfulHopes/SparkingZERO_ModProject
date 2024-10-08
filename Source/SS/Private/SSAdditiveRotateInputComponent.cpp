#include "SSAdditiveRotateInputComponent.h"

USSAdditiveRotateInputComponent::USSAdditiveRotateInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoCutOff = false;
    this->AutoCutOffRadius = 15.00f;
    this->UpLimit = 0.20f;
    this->DownLimit = 0.20f;
    this->LeftLimit = 0.20f;
    this->RightLimit = 0.20f;
}


