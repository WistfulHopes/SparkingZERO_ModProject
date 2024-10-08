#pragma once
#include "CoreMinimal.h"
#include "KoratRingMenuDataRecord.h"
#include "KoratRingMenuDataArray.generated.h"

USTRUCT(BlueprintType)
struct FKoratRingMenuDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FKoratRingMenuDataRecord> RingMenuDatas;
    
    SS_API FKoratRingMenuDataArray();
};

