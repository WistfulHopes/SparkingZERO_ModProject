#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticSceneSettingUi.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSDramaticSceneSettingUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* OpeningSceneButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* VictorySceneButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* DefeatSceneButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* VictoryEndingEnableButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* DefeatEndingEnableButton;
    
public:
    USSDramaticSceneSettingUi();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectPanel(USSMenuButton* InButton);
    
};

