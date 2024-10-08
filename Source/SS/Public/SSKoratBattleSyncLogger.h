#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSKoratBattleSyncLogger.generated.h"

UCLASS(Blueprintable)
class SS_API USSKoratBattleSyncLogger : public UObject {
    GENERATED_BODY()
public:
    USSKoratBattleSyncLogger();

    UFUNCTION(BlueprintCallable)
    static void LogBtlSyncFromBP(int32 InLevel, int32 InPlaySide, const FString& InText);
    
};

