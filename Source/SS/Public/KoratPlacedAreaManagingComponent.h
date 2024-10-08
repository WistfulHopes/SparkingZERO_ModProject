#pragma once
#include "CoreMinimal.h"
#include "KoratAreaManagingComponent.h"
#include "KoratPlacedAreaManagingComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratPlacedAreaManagingComponent : public UKoratAreaManagingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USceneComponent>> AreaComponents;
    
public:
    UKoratPlacedAreaManagingComponent(const FObjectInitializer& ObjectInitializer);

};

