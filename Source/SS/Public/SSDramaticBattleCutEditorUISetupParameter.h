#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUISetupParameter.generated.h"

class ASSDramaticBattleCutEditorController;
class ASSDramaticBattleNewCutEditorController;

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorUISetupParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleCutEditorController* CutEditorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDramaticBattleNewCutEditorController* NewCutEditorController;
    
    SS_API FSSDramaticBattleCutEditorUISetupParameter();
};

