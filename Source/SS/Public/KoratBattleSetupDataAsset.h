#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupTransition.h"
#include "KoratBattleSetupFigurePatternTransitionData.h"
#include "KoratBattleSetupMenuTransitionData.h"
#include "MutualDataAsset.h"
#include "KoratBattleSetupDataAsset.generated.h"

class UKoratBattleSetupCommonDataAsset;
class ULevelSequence;

UCLASS(Blueprintable)
class UKoratBattleSetupDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FKoratBattleSetupMenuTransitionData> TransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULevelSequence*, FKoratBattleSetupFigurePatternTransitionData> CharacterFigureTransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FName> CameraSequenceAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftClassPtr<UObject>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBattleSetupCommonDataAsset* CommonData;
    
public:
    UKoratBattleSetupDataAsset();

};

