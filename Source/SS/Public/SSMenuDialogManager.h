#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSMenuDialogManager.generated.h"

class ASSPlayerController;
class USSGameInstance;
class USSMenuGeneralDialog;

UCLASS(Blueprintable)
class USSMenuDialogManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSPlayerController* PlayerController;
    
public:
    USSMenuDialogManager();

};

