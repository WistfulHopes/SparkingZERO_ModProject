#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionDialogType.h"
#include "KoratMissionDialogData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMissionDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuMissionDialogType DialogType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Datas;
    
    SS_API FKoratMissionDialogData();
};

