#include "ManaMovie.h"

UManaMovie::UManaMovie() {
    this->NumSubtitleChannels = 0;
    this->MaxSubtitleSize = 0;
    this->MinBufferSize = 0;
    this->MaxChunkSize = 0;
    this->bIsAlpha = false;
}

bool UManaMovie::Validate() const {
    return false;
}

FString UManaMovie::GetUrl() const {
    return TEXT("");
}


