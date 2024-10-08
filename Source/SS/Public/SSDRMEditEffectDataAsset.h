#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDRMEditEffectDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSDRMEditEffectDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    USSDRMEditEffectDataAsset();

};

