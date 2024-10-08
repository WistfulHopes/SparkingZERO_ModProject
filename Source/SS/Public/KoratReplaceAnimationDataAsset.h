#pragma once
#include "CoreMinimal.h"
#include "KoratReplaceAnimationDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratReplaceAnimationDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratReplaceAnimationDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratReplaceAnimationDataAssetRecord> Records;
    
public:
    UKoratReplaceAnimationDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

