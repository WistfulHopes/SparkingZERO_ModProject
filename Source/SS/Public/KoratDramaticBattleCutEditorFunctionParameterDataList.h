#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorFunctionParameterDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleCutEditorFunctionParameterDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleCutEditorFunctionParameterDataList();
};

