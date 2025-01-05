#pragma once
#include "CoreMinimal.h"
#include "SSBattleMode010Data.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSBattleMode010Data {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CleardIdArray;
    
    FSSBattleMode010Data();
};

