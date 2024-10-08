#pragma once
#include "CoreMinimal.h"
#include "SSDitherComponent.h"
#include "SSAfterImageDitherComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSAfterImageDitherComponent : public USSDitherComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> ControlMaterialCaches;
    
public:
    USSAfterImageDitherComponent(const FObjectInitializer& ObjectInitializer);

};

