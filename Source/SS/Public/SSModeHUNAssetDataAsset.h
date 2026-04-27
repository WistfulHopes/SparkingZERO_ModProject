#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSModeHUNAssetDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSModeHUNAssetDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> CameraSequencer;
    
public:
    USSModeHUNAssetDataAsset();

};

