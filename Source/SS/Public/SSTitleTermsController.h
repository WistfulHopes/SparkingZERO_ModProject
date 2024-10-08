#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSTitleTermsController.generated.h"

class USSTitleLanguageSelectManager;
class USSTitleTermsManager;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSTitleTermsController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTitleLanguageSelectManager* TitleLanguageSelectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTitleTermsManager* TitleTermsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* Option_BGBlur;
    
public:
    ASSTitleTermsController(const FObjectInitializer& ObjectInitializer);

};

