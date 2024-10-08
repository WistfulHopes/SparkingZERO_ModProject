#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratRelatedEffectComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratRelatedEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> SourceObject;
    
public:
    UKoratRelatedEffectComponent(const FObjectInitializer& ObjectInitializer);

};

