#pragma once
#include "CoreMinimal.h"
#include "SSTournamentChartPlayerIcon.h"
#include "SSTournamentChartPlayerSlot.generated.h"

class UCanvasPanel;
class UImage;
class UTextBlock;
class UTextLayoutWidget;
class UUserWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentChartPlayerSlot : public USSTournamentChartPlayerIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* BaseSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* NamePlateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* NamePlateUserSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* NamePlateSlotSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconTitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* SlotNumberSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* SlotNumberBaseSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SelfSlotFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* IconTitleSwitcher;
    
    USSTournamentChartPlayerSlot();

};

