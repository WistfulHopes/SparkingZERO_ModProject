#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSTextTitleListDataAsset.generated.h"

class USSTitleDataAsset;

UCLASS(Blueprintable)
class USSTextTitleListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTitleDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTitleDataAsset* UnlockTitle;
    
    USSTextTitleListDataAsset();

};

