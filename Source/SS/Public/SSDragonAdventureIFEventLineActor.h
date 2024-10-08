#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFEventLineActor.generated.h"

UCLASS(Blueprintable)
class ASSDragonAdventureIFEventLineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LineID;
    
    ASSDragonAdventureIFEventLineActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool IsSideNoteLine();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenSideNoteLine();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenLine();
    
};

