#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureICommonDirectingSequencerType.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFCommonDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class USSDragonAdventureIFCommonDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDragonAdventureICommonDirectingSequencerType, TSoftObjectPtr<ULevelSequence>> DirectingSequencer;
    
    USSDragonAdventureIFCommonDataAsset();

};

