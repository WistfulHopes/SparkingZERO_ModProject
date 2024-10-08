#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDRMEditLayerDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSDRMEditLayerDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    USSDRMEditLayerDataAsset();

};

