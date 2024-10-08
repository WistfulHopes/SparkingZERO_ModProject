#include "Sofdec2MovieActor.h"

ASofdec2MovieActor::ASofdec2MovieActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManaSourceNo = 0;
    this->MovieMode = ESofdec2MovieMode::ESofdec2MovieModeNon;
    this->MovieModeBackup = ESofdec2MovieMode::ESofdec2MovieModeNon;
    this->bEnableSound = true;
    this->bEnableLoop = false;
}


