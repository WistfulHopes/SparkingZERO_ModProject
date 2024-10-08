#pragma once
#include "CoreMinimal.h"
#include "KoratEffectHitAirWallInstanceInfo.generated.h"

class AActor;
class ASSLevelSequenceActor;

USTRUCT(BlueprintType)
struct FKoratEffectHitAirWallInstanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> LevelSequenceActor;
    
    SS_API FKoratEffectHitAirWallInstanceInfo();
};

