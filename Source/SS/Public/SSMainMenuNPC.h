#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuNPCWaitAnimData.h"
#include "SSMainMenuNPC.generated.h"

class ASSLevelSequenceActor;
class ASSMenuCharacter;

USTRUCT(BlueprintType)
struct FSSMainMenuNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuNPCWaitAnimData> WaitAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitAnimIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSMenuCharacter* MenuCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* AnimSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntryActionPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOrigin;
    
    SS_API FSSMainMenuNPC();
};

