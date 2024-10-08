#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorFunctionDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleCutEditorFunctionDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleCutEditorFunctionDataList();
};

