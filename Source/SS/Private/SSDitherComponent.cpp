#include "SSDitherComponent.h"

USSDitherComponent::USSDitherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterDitherAlpha = 1.00f;
    this->bCharacterDitherActive = false;
    this->bCameraDitherActive = false;
    this->CameraFadeDistanceNear = 0.00f;
    this->CameraFadeDistanceFar = 400.00f;
    this->CameraFadeDistanceOffset = 0.00f;
    this->CameraDitherTiling = 10.00f;
    this->CameraDitherSaturation = 0.00f;
    this->AfterImageDitherActive = 0.00f;
    this->beforeAlpha = 1.00f;
    this->beforeLength = 0.00f;
    this->LastSetDitherAlpha = 1.00f;
    this->bSwitchSIEFlag = false;
    this->DefaultDitherRatio = 1.00f;
    this->MaterialDitherValueName = TEXT("CharacterDitherValue");
    this->MaterialDitherActiveName = TEXT("AfterImageActive");
    this->programmableAlpha = 1.00f;
    this->programmableStartAlpha = 1.00f;
    this->programmableEndAlpha = 1.00f;
    this->programmableChangeTime = 0.00f;
    this->programmableElapsedTime = 0.00f;
    this->bProgrammableEnable = false;
    this->bProgrammableKeep = false;
}

void USSDitherComponent::SetDitherRatio_Implementation(float InDitherRatio) {
}

void USSDitherComponent::SetDefaultDitherAlpha_Implementation(float InDitherRatio) {
}

void USSDitherComponent::ProgrammableAlphaExec(float InStartDitherRatio, float InEndDitherRatio, float InDitherTime, bool InDitherKeep) {
}

void USSDitherComponent::InitializeDither_Implementation() {
}

FName USSDitherComponent::GetComponentTagName() {
    return NAME_None;
}


