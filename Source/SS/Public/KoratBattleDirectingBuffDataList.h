#pragma once
#include "CoreMinimal.h"
#include "KoratBattleDirectingBuffDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleDirectingBuffDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleDirectingBuffDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBattleDirectingBuffDataList) { return 0; }

