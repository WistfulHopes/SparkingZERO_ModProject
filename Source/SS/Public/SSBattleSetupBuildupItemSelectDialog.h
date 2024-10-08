#pragma once
#include "CoreMinimal.h"
#include "SSMenuViewScroll.h"
#include "SSBattleSetupBuildupItemSelectDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSBattleSetupBuildupItemSelectDialog : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemNameTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemDescriptionTextWidgetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BlankItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BlankItemDescriptionText;
    
    USSBattleSetupBuildupItemSelectDialog();

};

