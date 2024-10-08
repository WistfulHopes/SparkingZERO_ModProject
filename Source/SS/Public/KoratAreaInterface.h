#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "KoratAreaInterface.generated.h"

UINTERFACE()
class UKoratAreaInterface : public UInterface {
    GENERATED_BODY()
};

class IKoratAreaInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool IsInside(const FVector& WorldPoint) PURE_VIRTUAL(IsInside, return false;);
    
};

