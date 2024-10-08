#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSStampListDataAsset.generated.h"

class USSTitleDataAsset;

UCLASS(Blueprintable)
class USSStampListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTitleDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTitleDataAsset* UnlockTitle;
    
    USSStampListDataAsset();

};

