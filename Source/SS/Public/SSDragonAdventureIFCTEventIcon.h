#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFCTEventIcon.generated.h"

class ASSDragonAdventureIFEventIconActor;

UCLASS(Blueprintable)
class ASSDragonAdventureIFCTEventIcon : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASSDragonAdventureIFEventIconActor*> EventIconArray;
    
public:
    ASSDragonAdventureIFCTEventIcon(const FObjectInitializer& ObjectInitializer);

};

