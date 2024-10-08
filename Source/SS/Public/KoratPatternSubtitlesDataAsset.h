#pragma once
#include "CoreMinimal.h"
#include "KoratPatternSubtitlesDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratPatternSubtitlesDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratPatternSubtitlesDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratPatternSubtitlesDataAssetRecord> Records;
    
public:
    UKoratPatternSubtitlesDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

