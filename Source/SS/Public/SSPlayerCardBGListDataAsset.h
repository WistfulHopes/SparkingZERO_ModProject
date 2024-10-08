#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSPlayerCardBGListDataAsset.generated.h"

class USSPlayerCardBGDataAsset;

UCLASS(Blueprintable)
class USSPlayerCardBGListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSPlayerCardBGDataAsset*> PtrRecords;
    
    USSPlayerCardBGListDataAsset();

};

