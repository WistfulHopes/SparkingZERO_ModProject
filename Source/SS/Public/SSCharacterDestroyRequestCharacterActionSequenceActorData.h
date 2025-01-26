#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterActionFinishReason.h"
#include "KoratActionDataList.h"
#include "SSCharacterDestroyRequestCharacterActionSequenceActorData.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterDestroyRequestCharacterActionSequenceActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterActionFinishReason ActionFinishReason;
    
    SS_API FSSCharacterDestroyRequestCharacterActionSequenceActorData();
};

