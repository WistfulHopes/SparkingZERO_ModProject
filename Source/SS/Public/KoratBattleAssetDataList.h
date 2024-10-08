#pragma once
#include "CoreMinimal.h"
#include "KoratBattleAssetDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleAssetDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattleAssetDataList();
};

