#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratMenuCommonDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratMenuCommonDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SaveLoadIconDispSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectingIconDurationUntilDispSec;
    
public:
    UKoratMenuCommonDataAsset();

};

