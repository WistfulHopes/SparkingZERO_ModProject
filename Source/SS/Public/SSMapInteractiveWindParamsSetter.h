#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSMapInteractiveWindParams.h"
#include "SSMapInteractiveWindParamsSetter.generated.h"

UCLASS(Blueprintable)
class ASSMapInteractiveWindParamsSetter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FSSMapInteractiveWindParams Params;
    
    ASSMapInteractiveWindParamsSetter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefault();
    
};

