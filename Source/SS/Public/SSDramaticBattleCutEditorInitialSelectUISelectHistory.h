#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorInitialSelectUISelectHistory.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorInitialSelectUISelectHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    SS_API FSSDramaticBattleCutEditorInitialSelectUISelectHistory();
};

