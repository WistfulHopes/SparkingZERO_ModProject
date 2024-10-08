#pragma once
#include "CoreMinimal.h"
#include "KoratCombativesKeyDataList.h"
#include "KoratAdditionalDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratAdditionalDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCombativesKeyDataList AdditionalCombativesKey;
    
    SS_API FKoratAdditionalDamageInfo();
};

