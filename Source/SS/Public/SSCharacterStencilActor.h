#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCharacterStencilActor.generated.h"

class ACharacter;
class USSCharacterStencilComponent;
class USSCharacterStencilSequenceParams;

UCLASS(Blueprintable)
class ASSCharacterStencilActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bStencilValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 StencilValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 PriorityOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ACharacter* TargetCharcter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString TargetMeshComponentName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString TargetMeshComponentName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString TargetMeshComponentName3;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterStencilSequenceParams* StencilParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSCharacterStencilComponent> StencilComponent;
    
public:
    ASSCharacterStencilActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStencilValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStencilValid(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPriorityOffset(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStencilValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStencilValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriorityOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
};

