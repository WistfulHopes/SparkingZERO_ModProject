#include "SpRuntimeEngineSettings.h"

USpRuntimeEngineSettings::USpRuntimeEngineSettings() {
    this->IsConsumerControllerSeparation = true;
    this->bAssertionOutputBlueprintCallstackEnable = true;
    this->DebugUIFontSize = 32;
    this->ResidentMenuOpenCloseWithKeyboard.AddDefaulted(2);
    this->ResidentMenuOpenCloseWithGamepad.AddDefaulted(3);
    this->bShowDebugTelop = true;
    this->DebugTelopSpeed = 800;
    this->DebugTelopListHeight = 600;
    this->bDebugGuiEnable = true;
    this->bDebugGuiAlwaysRunStat = false;
    this->bDebugGuiMeterEnable = true;
    this->bDebugGuiMeterWideMode = false;
    this->DebugGuiMeterScale = 1.00f;
    this->DebugGuiMeterFrames = 4;
}


