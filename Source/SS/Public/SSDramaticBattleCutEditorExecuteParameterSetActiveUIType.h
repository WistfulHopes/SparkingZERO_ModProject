#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "SSDramaticBattleCutEditorExecuteParameterSetActiveUIType.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleCutEditorExecuteParameterSetActiveUIType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleCutEditorUIType UIType;
    
    SS_API FSSDramaticBattleCutEditorExecuteParameterSetActiveUIType();
};

