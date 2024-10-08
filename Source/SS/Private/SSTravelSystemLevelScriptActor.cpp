#include "SSTravelSystemLevelScriptActor.h"

ASSTravelSystemLevelScriptActor::ASSTravelSystemLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableTravelSystem = false;
}

void ASSTravelSystemLevelScriptActor::ViewLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FKoratUILevelDataList InUILevel, bool InShouldBeVisible, bool& OutResult) {
}

void ASSTravelSystemLevelScriptActor::TransitionLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FSSSubLevelTravelInfo InInfo, bool& OutResult) {
}

void ASSTravelSystemLevelScriptActor::RemoveLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FKoratUILevelDataList InUILevel, bool& OutResult) {
}

void ASSTravelSystemLevelScriptActor::AddLevel(UObject* WorldContextObject, FLatentActionInfo InLatentInfo, const FKoratUILevelDataList InUILevel, bool InShouldBeVisible, bool& OutResult) {
}


