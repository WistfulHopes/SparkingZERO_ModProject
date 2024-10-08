#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleAssistComboAssistDataRecord.h"
#include "SSBattleAssistDragonDashAssistRecord.h"
#include "SSBattleAssistGuardDataRecord.h"
#include "SSBattleAssistPursuitAssistRecord.h"
#include "SSBattleAssistReversalAssistRecord.h"
#include "SSBattleAssistDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBattleAssistDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleAssistComboAssistDataRecord ComboAssistDataRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleAssistPursuitAssistRecord PursuitAssistRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleAssistGuardDataRecord GuardRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleAssistDragonDashAssistRecord DragonDashRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleAssistReversalAssistRecord ReversalRecord;
    
    USSBattleAssistDataAsset();

    UFUNCTION(BlueprintCallable)
    void InitializeReversalAssist();
    
    UFUNCTION(BlueprintCallable)
    void InitializeComboAssistComboList();
    
    UFUNCTION(BlueprintCallable)
    void InitializeComboAssistBattlekey();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAutoGuardBattlekey();
    
};

