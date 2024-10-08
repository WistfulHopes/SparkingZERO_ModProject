#include "KoratAtomCueSheetLoaderActor.h"

AKoratAtomCueSheetLoaderActor::AKoratAtomCueSheetLoaderActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsCueSheetAssetLoadCompleted = false;
    this->IsCueSheetLoadCompleted = false;
    this->CueSheet = NULL;
}

void AKoratAtomCueSheetLoaderActor::StopLoadAsync(const FName& InCueSheetName) {
}

void AKoratAtomCueSheetLoaderActor::OnCueSheetLoadFailed() {
}

void AKoratAtomCueSheetLoaderActor::OnCueSheetLoadCompleted(USoundAtomCueSheet* InCueSheet) {
}

void AKoratAtomCueSheetLoaderActor::OnCueSheetAssetLoadCompleted() {
}

void AKoratAtomCueSheetLoaderActor::LoadAsync(FSoftObjectPath PathForCueSheet) {
}


