#include "SSGalleryTheaterLocalSingleton.h"

USSGalleryTheaterLocalSingleton::USSGalleryTheaterLocalSingleton() {
}

TArray<USSReplayDataUIElement*> USSGalleryTheaterLocalSingleton::GetReplayDataArray() {
    return TArray<USSReplayDataUIElement*>();
}

TArray<USSReplayDataUIElement*> USSGalleryTheaterLocalSingleton::GetDeleteReplayDataArray() {
    return TArray<USSReplayDataUIElement*>();
}

USSReplayDataUIElement* USSGalleryTheaterLocalSingleton::GetCurrentReplayDataUIElement() const {
    return NULL;
}

void USSGalleryTheaterLocalSingleton::EmptyDeleteReplayDataArray() {
}


