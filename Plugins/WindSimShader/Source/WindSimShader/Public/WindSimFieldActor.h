#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WindSimFieldActor.generated.h"

class UWindSimFieldComponent;

UCLASS(Blueprintable)
class WINDSIMSHADER_API AWindSimFieldActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWindSimFieldComponent* FieldComponent;
    
public:
    AWindSimFieldActor(const FObjectInitializer& ObjectInitializer);

};

