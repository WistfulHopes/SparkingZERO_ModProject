#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "SSBattleAssistComboDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleAssistComboDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PROB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> BattleKeyArray;
    
    SS_API FSSBattleAssistComboDataRecord();
};

