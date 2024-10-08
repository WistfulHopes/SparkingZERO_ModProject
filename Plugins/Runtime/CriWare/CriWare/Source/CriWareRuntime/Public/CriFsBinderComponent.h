#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ECriFsBinderStatus.h"
#include "CriFsBinderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UCriFsBinderComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBindError);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBindCompleted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBindCompleted OnBindCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBindError OnBindError;
    
    UCriFsBinderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    ECriFsBinderStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    void Bind();
    
};

