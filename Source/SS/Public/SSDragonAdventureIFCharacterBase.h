#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFCharacterBase.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* BaseActor;
    
    SS_API FSSDragonAdventureIFCharacterBase();
};

