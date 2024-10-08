#pragma once
#include "CoreMinimal.h"
#include "SSEffectSplineMeshes.generated.h"

class USplineMeshComponent;

USTRUCT(BlueprintType)
struct FSSEffectSplineMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> Meshes;
    
    SS_API FSSEffectSplineMeshes();
};

