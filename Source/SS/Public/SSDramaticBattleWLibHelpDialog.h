#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleWLibHelpDialogData.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleWLibHelpDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleWLibHelpDialog : public USSMenuManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleWLibHelpDialogData> PageData;
    
    USSDramaticBattleWLibHelpDialog();

};

