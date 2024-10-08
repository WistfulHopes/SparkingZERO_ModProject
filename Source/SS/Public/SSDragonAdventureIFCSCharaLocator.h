#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDragonAdventureIFCSCharaLocator.generated.h"

UCLASS(Blueprintable)
class ASSDragonAdventureIFCSCharaLocator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ASSDragonAdventureIFCSCharaLocator(const FObjectInitializer& ObjectInitializer);

};

