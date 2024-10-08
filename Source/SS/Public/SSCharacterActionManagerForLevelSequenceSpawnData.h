#pragma once
#include "CoreMinimal.h"
#include "SSCharacterActionManagerForLevelSequenceSpawnData.generated.h"

class ASSLevelSequenceActor;

USTRUCT(BlueprintType)
struct FSSCharacterActionManagerForLevelSequenceSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    SS_API FSSCharacterActionManagerForLevelSequenceSpawnData();
};

