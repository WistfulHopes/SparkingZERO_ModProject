#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratVelocityLineEffectsDataAssetRecord.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratVelocityLineEffectsDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> SequenceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> UseActionType;
    
    SS_API FKoratVelocityLineEffectsDataAssetRecord();
};

