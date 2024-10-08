#pragma once
#include "CoreMinimal.h"
#include "KoratPostProcessChameleonComponentBase.h"
#include "KoratPostProcessChameleonComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SS_API UKoratPostProcessChameleonComponent : public UKoratPostProcessChameleonComponentBase {
    GENERATED_BODY()
public:
    UKoratPostProcessChameleonComponent(const FObjectInitializer& ObjectInitializer);

};

