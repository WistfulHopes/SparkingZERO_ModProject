#pragma once
#include "CoreMinimal.h"
#include "KoratSequenceResource.h"
#include "KoratLevelSequenceActorSpawnParameters.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct FKoratLevelSequenceActorSpawnParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SpawnContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSequenceResource ResourceData;
    
    SS_API FKoratLevelSequenceActorSpawnParameters();
};

