#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorUIWindowButtonGuideDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleCutEditorUIWindowButtonGuideDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleCutEditorUIWindowButtonGuideDataList();
};

