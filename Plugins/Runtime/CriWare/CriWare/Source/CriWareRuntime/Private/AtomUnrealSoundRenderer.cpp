#include "AtomUnrealSoundRenderer.h"

UAtomUnrealSoundRenderer::UAtomUnrealSoundRenderer() : USoundWaveProcedural(FObjectInitializer::Get()) {
    this->FrequenciesToAnalyze.AddDefaulted(4);
}


