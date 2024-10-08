#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCutEditorUIWindowSelectItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleCutEditorUIWindowSelectItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleCutEditorUIWindowSelectItemDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDramaticBattleCutEditorUIWindowSelectItemDataList) { return 0; }

