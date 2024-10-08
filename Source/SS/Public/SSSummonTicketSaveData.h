#pragma once
#include "CoreMinimal.h"
#include "SSSummonTicketSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSSummonTicketSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainCount;
    
    SS_API FSSSummonTicketSaveData();
};

