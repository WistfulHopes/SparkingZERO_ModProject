#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSEditPartsImageListDataAsset.generated.h"

class USSEditPartsImageDataAsset;

UCLASS(Blueprintable)
class USSEditPartsImageListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSEditPartsImageDataAsset*> PtrRecords;
    
    USSEditPartsImageListDataAsset();

};

