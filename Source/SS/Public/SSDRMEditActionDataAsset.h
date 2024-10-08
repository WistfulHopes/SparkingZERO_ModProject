#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticRebindType.h"
#include "MutualDataAsset.h"
#include "SSDRMEditActionDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSDRMEditActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ULevelSequence>> EffectLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticRebindType RebindType;
    
    USSDRMEditActionDataAsset();

};

