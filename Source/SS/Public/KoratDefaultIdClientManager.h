#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratIdClientManager.h"
#include "KoratDefaultIdClientManager.generated.h"

class UKoratEffectLimitsManager;

UCLASS(Blueprintable)
class UKoratDefaultIdClientManager : public UObject, public IKoratIdClientManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratEffectLimitsManager* EffectLimitsManager;
    
public:
    UKoratDefaultIdClientManager();


    // Fix for true pure virtual functions not being implemented
};

