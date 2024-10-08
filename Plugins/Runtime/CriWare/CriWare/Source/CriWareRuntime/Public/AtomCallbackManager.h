#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomBeatSyncInfo.h"
#include "AtomSequenceInfo.h"
#include "EAtomSequenceEventType.h"
#include "AtomCallbackManager.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomCallbackManager : public UObject {
    GENERATED_BODY()
public:
    UAtomCallbackManager();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void NativeBreakAtomSequenceInfo(const FAtomSequenceInfo& SequenceInfo, float& Time, FString& TagName, EAtomSequenceEventType& EventType, int32& CallbackID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void NativeBreakAtomBeatSyncInfo(const FAtomBeatSyncInfo& BeatSyncInfo, int32& BarCnt, int32& BeatCnt, float& BeatProgress, float& Bpm, int32& Offset, int32& NumBeats);
    
};

