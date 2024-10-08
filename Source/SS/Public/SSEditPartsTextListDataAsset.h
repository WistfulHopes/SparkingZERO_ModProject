#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSEditPartsTextListDataAsset.generated.h"

class USSEditPartsTextDataAsset;

UCLASS(Blueprintable)
class USSEditPartsTextListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSEditPartsTextDataAsset*> PtrRecords;
    
    USSEditPartsTextListDataAsset();

};

