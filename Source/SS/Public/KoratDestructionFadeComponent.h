#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratDestructionFadeComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratDestructionFadeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DynamicMaterials;
    
public:
    UKoratDestructionFadeComponent(const FObjectInitializer& ObjectInitializer);

};

