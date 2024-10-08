#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSWaitingIconManager.generated.h"

class USSWaitingIcon;

UCLASS(Blueprintable)
class USSWaitingIconManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSWaitingIcon* WaitingIcon;
    
public:
    USSWaitingIconManager();

};

