#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMainMenuDataAsset.generated.h"

UCLASS(Blueprintable)
class USSMainMenuDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecordsSecond;
    
public:
    USSMainMenuDataAsset();

};

