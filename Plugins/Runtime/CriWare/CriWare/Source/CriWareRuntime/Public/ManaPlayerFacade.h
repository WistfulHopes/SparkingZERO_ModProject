#pragma once
#include "CoreMinimal.h"
#include "ManaPlayerFacade.generated.h"

class UManaComponent;

USTRUCT(BlueprintType)
struct FManaPlayerFacade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UManaComponent* ManaComponent;
    
    CRIWARERUNTIME_API FManaPlayerFacade();
};

