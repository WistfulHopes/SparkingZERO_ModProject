#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratSequencePlayInfo.h"
#include "KoratCharacterActionSpawnSequenceParameter.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratCharacterActionSpawnSequenceParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencePlayInfo> SequencePlayInfo;
    
    SS_API FKoratCharacterActionSpawnSequenceParameter();
};

