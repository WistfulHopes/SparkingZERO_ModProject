#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SSCharacterStencilCache.h"
#include "SSCharacterStencilComponent.generated.h"

class USSCharacterStencilParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterStencilComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USSCharacterStencilParams>> StencilArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSCharacterStencilParams> CurrentWholeParam;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USSCharacterStencilParams>> CurrentPartParams;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterStencilCache> StencilMeshCaches;
    
public:
    USSCharacterStencilComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static FName GetComponentTagName();
    
};

