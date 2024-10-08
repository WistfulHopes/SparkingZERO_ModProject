#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticEditDirectionUi.generated.h"

class USSDramaticEditDirectionPanel;
class USSDramticBattleBattleDataRecord;
class USSMenuButton;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditDirectionUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSDramaticEditDirectionPanel*> DirectionPanels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BeforeFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramticBattleBattleDataRecord* BeforeEditBattleData;
    
public:
    USSDramaticEditDirectionUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SelectPanel();
    
    UFUNCTION(BlueprintCallable)
    void DecideSaveButton();
    
};

