#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDownLoadContentsDataAsset.generated.h"

class USSDownLoadContentsDataAssetRecord;

UCLASS(Blueprintable, MinimalAPI)
class USSDownLoadContentsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDownLoadContentsDataAssetRecord*> PtrRecords;
    
public:
    USSDownLoadContentsDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDownLoadContentsName(const FName& InKey) const;
    
};

