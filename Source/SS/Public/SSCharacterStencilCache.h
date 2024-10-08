#pragma once
#include "CoreMinimal.h"
#include "SSCharacterStencilCache.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FSSCharacterStencilCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMeshComponent> StencilMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CustomDepthStencilValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRenderCustomDepth;
    
    SS_API FSSCharacterStencilCache();
};

