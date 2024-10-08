#pragma once
#include "CoreMinimal.h"
#include "KoratBuffEffectInstance.generated.h"

class ASSLevelSequenceActor;

USTRUCT(BlueprintType)
struct FKoratBuffEffectInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ASSLevelSequenceActor>> LevelSequenceActors;
    
    SS_API FKoratBuffEffectInstance();
};

