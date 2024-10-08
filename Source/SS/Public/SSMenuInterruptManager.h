#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSMenuInterruptManager.generated.h"

class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class USSMenuInterruptManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
public:
    USSMenuInterruptManager();

};

