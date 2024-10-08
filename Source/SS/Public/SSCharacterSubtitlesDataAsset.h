#pragma once
#include "CoreMinimal.h"
#include "KoratPatternSubtitlesDataAssetRecord.h"
#include "KoratPatternSubtitlesDataList.h"
#include "MutualDataAsset.h"
#include "SSCharacterSubtitlesDataAsset.generated.h"

UCLASS(Blueprintable)
class USSCharacterSubtitlesDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratPatternSubtitlesDataList, FKoratPatternSubtitlesDataAssetRecord> Records;
    
public:
    USSCharacterSubtitlesDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

