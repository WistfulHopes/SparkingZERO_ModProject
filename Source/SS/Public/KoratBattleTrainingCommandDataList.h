#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTrainingCommandDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleTrainingCommandDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleTrainingCommandDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratBattleTrainingCommandDataList) { return 0; }

