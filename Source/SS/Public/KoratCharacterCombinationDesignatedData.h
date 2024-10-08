#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterCombinationDesignatedData.generated.h"

class UKoratCombinationDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterCombinationDesignatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKoratCharacterDataList> Opponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCombinationDataAsset* DataAsset;
    
    SS_API FKoratCharacterCombinationDesignatedData();
};

