#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCharacterMeshTickStopActor.generated.h"

class ASSCharacter;

UCLASS(Blueprintable)
class SS_API ASSCharacterMeshTickStopActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ASSCharacter*> TickStopRequestCharacters;
    
public:
    ASSCharacterMeshTickStopActor(const FObjectInitializer& ObjectInitializer);

};

