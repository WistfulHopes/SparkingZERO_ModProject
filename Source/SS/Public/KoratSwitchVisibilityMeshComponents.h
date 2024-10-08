#pragma once
#include "CoreMinimal.h"
#include "KoratSwitchVisibilityMeshComponents.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FKoratSwitchVisibilityMeshComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> Components;
    
    SS_API FKoratSwitchVisibilityMeshComponents();
};

