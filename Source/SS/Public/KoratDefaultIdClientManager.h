#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratIdClientManager.h"
#include "KoratDefaultIdClientManager.generated.h"

UCLASS(Blueprintable)
class UKoratDefaultIdClientManager : public UObject, public IKoratIdClientManager {
    GENERATED_BODY()
public:
    UKoratDefaultIdClientManager();


    // Fix for true pure virtual functions not being implemented
};

