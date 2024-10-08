#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorFunctionOperationDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleCutEditorFunctionOperationDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleCutEditorFunctionOperationDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDramaticBattleCutEditorFunctionOperationDataList) { return 0; }

