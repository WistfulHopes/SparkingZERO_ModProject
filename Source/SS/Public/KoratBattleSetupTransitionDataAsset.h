#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupTransition.h"
#include "KoratBattleSetupFigurePatternTransitionData.h"
#include "KoratBattleSetupMenuTransitionData.h"
#include "KoratBattleSetupTransitionDataRecord.h"
#include "MutualDataAsset.h"
#include "KoratBattleSetupTransitionDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class UKoratBattleSetupTransitionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FKoratBattleSetupMenuTransitionData> TransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULevelSequence*, FKoratBattleSetupFigurePatternTransitionData> CharacterFigureTransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FKoratBattleSetupTransitionDataRecord> IdleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord BlindEffectLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataTopTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataTopFromSt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataTopTeamFromSt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComTopTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComTopFromSt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComTopTeamFromSt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataCustomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComCustomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataCustomizeFromEt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataCharacterSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComCharacterSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataCharacterSelectFromEt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComCharacterSelectFromEt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataCharacterSelectEtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComCharacterSelectEtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataPreBattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataCharacterSelectMovePlace1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataCharacterSelectMovePlace2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComCharacterSelectMovePlace1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleSetupTransitionDataRecord IdleDataComCharacterSelectMovePlace2;
    
public:
    UKoratBattleSetupTransitionDataAsset();

};

