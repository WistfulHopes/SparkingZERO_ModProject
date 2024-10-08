#pragma once
#include "CoreMinimal.h"
#include "KoratBattleSetupDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleSetupDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleSetupDataList();
};

