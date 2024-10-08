#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorUIWindowDisplayConditionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleCutEditorUIWindowDisplayConditionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleCutEditorUIWindowDisplayConditionDataList();
};

