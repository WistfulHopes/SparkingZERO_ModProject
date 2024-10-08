#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleTipsDataAssetRecord.generated.h"

class USSDramaticBattleTipsDataAsset;

USTRUCT(BlueprintType)
struct FKoratDramaticBattleTipsDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleTipsDataAsset* TipsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderNum;
    
    SS_API FKoratDramaticBattleTipsDataAssetRecord();
};

