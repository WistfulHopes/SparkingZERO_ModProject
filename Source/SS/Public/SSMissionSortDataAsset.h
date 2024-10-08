#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMissionSortDataAsset.generated.h"

class USSMissionSortDataAssetRecord;

UCLASS(Blueprintable, MinimalAPI)
class USSMissionSortDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSMissionSortDataAssetRecord*> PtrRecords;
    
public:
    USSMissionSortDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionSortName(const FName& InKey) const;
    
};

