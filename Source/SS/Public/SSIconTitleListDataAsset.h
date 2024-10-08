#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSIconTitleListDataAsset.generated.h"

class USSTitleDataAsset;

UCLASS(Blueprintable)
class USSIconTitleListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSTitleDataAsset*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSTitleDataAsset* UnlockTitle;
    
    USSIconTitleListDataAsset();

};

