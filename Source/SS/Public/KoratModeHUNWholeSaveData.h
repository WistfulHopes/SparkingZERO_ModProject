#pragma once
#include "CoreMinimal.h"
#include "KoratModeHUNWholeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKoratModeHUNWholeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReleaseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCongratulatedAlready;
    
    SS_API FKoratModeHUNWholeSaveData();
};

