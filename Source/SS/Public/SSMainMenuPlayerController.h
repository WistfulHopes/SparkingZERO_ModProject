#pragma once
#include "CoreMinimal.h"
#include "SSMenuPlayerController.h"
#include "SSMainMenuPlayerController.generated.h"

class USSMainMenuManager;
class USSOptionListBrightnessManager;
class USSOptionListControlManager;
class USSOptionListKeyControlManager;
class USSOptionListNetworkManager;
class USSOptionListSoundManager;
class USSOptionListVideoManager;
class USSOptionManager;

UCLASS(Blueprintable)
class ASSMainMenuPlayerController : public ASSMenuPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMainMenuManager* mainMenuManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOptionManager* OptionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOptionListControlManager* OptionListControlManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOptionListSoundManager* OptionListSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOptionListNetworkManager* OptionListNetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOptionListBrightnessManager* OptionListBrightnessManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOptionListVideoManager* OptionListVideoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOptionListKeyControlManager* OptionListKeyControlManager;
    
public:
    ASSMainMenuPlayerController(const FObjectInitializer& ObjectInitializer);

};

