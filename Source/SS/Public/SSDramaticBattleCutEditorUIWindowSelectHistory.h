#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowSelectHistory.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUIWindowSelectHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    SS_API FSSDramaticBattleCutEditorUIWindowSelectHistory();
};

