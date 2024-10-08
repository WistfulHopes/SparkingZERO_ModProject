#pragma once
#include "CoreMinimal.h"
#include "EKoratBlastSlotType.h"
#include "SSBlastImpactActionNameRecord.h"
#include "SSBlastImpactActionRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBlastImpactActionRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBlastSlotType SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastImpactActionNameRecord P1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBlastImpactActionNameRecord P2;
    
    SS_API FSSBlastImpactActionRecord();
};

