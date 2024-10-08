#pragma once
#include "CoreMinimal.h"
#include "KoratPatternVoiceDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratPatternVoiceDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratPatternVoiceDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratPatternVoiceDataAssetRecord> Records;
    
public:
    UKoratPatternVoiceDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

