#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSAllWidgetsSetRenderOpacity.generated.h"

UCLASS(Blueprintable)
class ASSAllWidgetsSetRenderOpacity : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    ASSAllWidgetsSetRenderOpacity(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOpacity(float InOpacity);
    
};

