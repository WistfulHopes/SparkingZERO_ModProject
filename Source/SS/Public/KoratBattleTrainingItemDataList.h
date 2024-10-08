#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTrainingItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleTrainingItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleTrainingItemDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBattleTrainingItemDataList) { return 0; }

