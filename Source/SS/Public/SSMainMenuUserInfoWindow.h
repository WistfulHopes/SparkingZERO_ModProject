#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuWidgetFromList.h"
#include "SSMainMenuUserInfoWindow.generated.h"

class USSMainMenuUserInfoCategoryTab;
class USSMenuButton;
class UTextBlock;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuUserInfoWindow : public USSMainMenuWidgetFromList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UserNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* IconTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* TextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> LabelTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> WinRateTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMainMenuUserInfoCategoryTab*> Tabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RankPointText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* BattleCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RankIcon;
    
    USSMainMenuUserInfoWindow();

};

