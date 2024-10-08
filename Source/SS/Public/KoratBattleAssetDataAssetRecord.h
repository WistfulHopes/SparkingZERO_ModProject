#pragma once
#include "CoreMinimal.h"
#include "KoratBattleAssetDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleAssetDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> BlueprintClass;
    
    SS_API FKoratBattleAssetDataAssetRecord();
};

