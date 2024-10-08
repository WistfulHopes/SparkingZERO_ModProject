#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterCombinationDataAssetRecord.generated.h"

class UKoratCombinationDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterCombinationDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionOpponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, UKoratCombinationDataAsset*> DesignatedDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCombinationDataAsset* DataAsset;
    
    SS_API FKoratCharacterCombinationDataAssetRecord();
};

