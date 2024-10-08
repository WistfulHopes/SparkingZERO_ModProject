#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticButtlleNewCutEditorSettingInnerCategory.h"
#include "ESSDramaticButtlleNewCutEditorSettingTopCategory.h"
#include "SSDramaticBattleNewCutEditorItemId.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleNewCutEditorItemId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticButtlleNewCutEditorSettingTopCategory TopCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticButtlleNewCutEditorSettingInnerCategory InnerCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    SS_API FSSDramaticBattleNewCutEditorItemId();
};

