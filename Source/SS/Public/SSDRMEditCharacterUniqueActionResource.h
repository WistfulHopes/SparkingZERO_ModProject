#pragma once
#include "CoreMinimal.h"
#include "SSDRMEditCharacterUniqueActionResource.generated.h"

class UKoratMLSDataAsset;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSDRMEditCharacterUniqueActionResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* MLS;
    
    SS_API FSSDRMEditCharacterUniqueActionResource();
};

