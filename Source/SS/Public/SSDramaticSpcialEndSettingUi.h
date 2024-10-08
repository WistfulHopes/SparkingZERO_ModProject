#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticSpcialEndSettingUi.generated.h"

class USSDramaticEditImageSaveData;
class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticSpcialEndSettingUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SpVictoryConditionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SpDefeatConditionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SpVictorySceneButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SpDefeatSceneButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SpVictoryEndingEnableButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SpDefeatEndingEnableButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditImageSaveData*> Thumbnails;
    
public:
    USSDramaticSpcialEndSettingUi();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectPanel(USSMenuButton* InButton);
    
};

