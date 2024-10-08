#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSTournamentChartWidget.generated.h"

class UImage;
class USSTournamentChartPlayerSlot;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSTournamentChartWidget : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSTournamentChartPlayerSlot*> PlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TournamentTitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RoundTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RoundTitleImage;
    
    USSTournamentChartWidget();

};

