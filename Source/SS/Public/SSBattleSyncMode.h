#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSBattleSyncMode.generated.h"

UCLASS(Blueprintable)
class USSBattleSyncMode : public UObject {
    GENERATED_BODY()
public:
    USSBattleSyncMode();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceBattleSyncMode_ForBP(const UObject* WorldContextObject, int32 InMode);
    
};

