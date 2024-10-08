#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratInteractTriggerEnumDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratInteractTriggerEnumDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> AssociatedActions;
    
    SS_API FKoratInteractTriggerEnumDataAssetRecord();
};

