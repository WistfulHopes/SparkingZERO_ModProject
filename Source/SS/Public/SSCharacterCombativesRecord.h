#pragma once
#include "CoreMinimal.h"
#include "KoratCombativesKeyDataList.h"
#include "SSCharacterCombativesParameter.h"
#include "SSCharacterCombativesRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterCombativesRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCombativesKeyDataList, FSSCharacterCombativesParameter> AdditionalCombatives;
    
    SS_API FSSCharacterCombativesRecord();
};

