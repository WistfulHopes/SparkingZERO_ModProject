#pragma once
#include "CoreMinimal.h"
#include "EDragonType.h"
#include "SSMythicalOrbListSaveData.h"
#include "SSMythicalOrbSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSMythicalOrbSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDragonType, FSSMythicalOrbListSaveData> OrbData;
    
    SS_API FSSMythicalOrbSaveData();
};

