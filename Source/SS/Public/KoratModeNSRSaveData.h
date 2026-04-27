#pragma once
#include "CoreMinimal.h"
#include "EKoratModeNSRSelectMode.h"
#include "KoratModeNSRModeData.h"
#include "KoratModeNSRSaveData.generated.h"

USTRUCT(BlueprintType)
struct FKoratModeNSRSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratModeNSRSelectMode, FKoratModeNSRModeData> ModeData;
    
    SS_API FKoratModeNSRSaveData();
};

