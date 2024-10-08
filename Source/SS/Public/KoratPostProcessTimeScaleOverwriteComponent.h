#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessChameleonOverwriteComponent.h"
#include "KoratPostProcessTimeScaleOverwriteComponent.generated.h"

class UKoratTimeScaleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratPostProcessTimeScaleOverwriteComponent : public UKoratPostProcessChameleonOverwriteComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratTimeScaleComponent* TimeScaleComponent;
    
public:
    UKoratPostProcessTimeScaleOverwriteComponent(const FObjectInitializer& ObjectInitializer);

};

