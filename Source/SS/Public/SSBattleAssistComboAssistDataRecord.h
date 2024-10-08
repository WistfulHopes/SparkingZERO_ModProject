#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "SSBattleAssistComboDataRecord.h"
#include "SSBattleAssistComboAssistDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleAssistComboAssistDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstRushSparkingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboResetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleAssistComboDataRecord> ComboRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> ComboAssistKeys;
    
    SS_API FSSBattleAssistComboAssistDataRecord();
};

