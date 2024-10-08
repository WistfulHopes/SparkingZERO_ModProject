#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMissionFilterDataAsset.generated.h"

class USSMissionFilterDataAssetRecord;

UCLASS(Blueprintable, MinimalAPI)
class USSMissionFilterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSMissionFilterDataAssetRecord*> PtrRecords;
    
public:
    USSMissionFilterDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionFilterName(const FName& InKey) const;
    
};

