#pragma once
#include "CoreMinimal.h"
#include "KoratMissionChara.generated.h"

class ASSLevelSequenceActor;

USTRUCT(BlueprintType)
struct FKoratMissionChara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* AnimSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAnimIdx;
    
    SS_API FKoratMissionChara();
};

