#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "SSMenuManager.h"
#include "SSDramaticEditOpeningUi.generated.h"

class USSDramaticEditSummaryButtonList;
class USSDramticBattleBattleDataRecord;
class USSMenuButton;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditOpeningUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> SummaryButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* TitleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* SaveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* BGMSelectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* JingleSelectButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CategoryTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* summaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BeforeFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticEditSummaryButtonList* ButtonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramticBattleBattleDataRecord* BeforeEditBattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> NullBrushs;
    
public:
    USSDramaticEditOpeningUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SelectSummaryThumbnail();
    
    UFUNCTION(BlueprintCallable)
    void DecideTitleThumbnail();
    
    UFUNCTION(BlueprintCallable)
    void DecideSaveButton();
    
    UFUNCTION(BlueprintCallable)
    void DecideJingleButton();
    
    UFUNCTION(BlueprintCallable)
    void DecideBGMButton();
    
};

