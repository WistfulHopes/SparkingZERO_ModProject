#pragma once
#include "CoreMinimal.h"
#include "KoratBattleDirectingBuffDataAssetRecord.generated.h"

class UKoratBuffPhaseDataAsset;

USTRUCT(BlueprintType)
struct FKoratBattleDirectingBuffDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBuffPhaseDataAsset* BuffData;
    
    SS_API FKoratBattleDirectingBuffDataAssetRecord();
};

