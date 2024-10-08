#pragma once
#include "CoreMinimal.h"
#include "SSTravelSystemSubLevelScriptAct.h"
#include "Templates/SubclassOf.h"
#include "SSUiLevelScriptActor.generated.h"

class ASSCutCameraDirector;
class ASSMenuCharacterManager;
class ASSMenuSceneController;

UCLASS(Blueprintable)
class ASSUiLevelScriptActor : public ASSTravelSystemSubLevelScriptAct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSMenuSceneController> MenuControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSCutCameraDirector> CutCameraDirectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSMenuSceneController* MenuController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSMenuCharacterManager* MenuCharacterManager;
    
public:
    ASSUiLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASSMenuSceneController* GetMenuController();
    
};

