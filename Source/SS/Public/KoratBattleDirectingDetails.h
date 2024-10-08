#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingAction.h"
#include "EKoratBattleDirectingActivate.h"
#include "EKoratBattleDirectingConditionTargetType.h"
#include "EKoratValid.h"
#include "KoratAiCommandDataList.h"
#include "KoratAiTypeDataList.h"
#include "KoratBGMDataList.h"
#include "KoratBattleConversation.h"
#include "KoratBattleDirectingBuffDataList.h"
#include "KoratCharacterItemDataList.h"
#include "SSCharacterSettingData.h"
#include "KoratBattleDirectingDetails.generated.h"

class USSEventSceneDEDataAsset;

USTRUCT(BlueprintType)
struct FKoratBattleDirectingDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleDirectingActivate DirectingActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleDirectingConditionTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCharactersPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterSettingData FormChangeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleDirectingAction BattleDirectingActivateAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivateNumericalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList CpuThinkingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateCpuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList IdName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEquipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterItemDataList EquipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingBuffDataList Buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleConversation BattleConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEventSceneDEDataAsset* EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiCommandDataList RequestAiCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_TargetCharactersPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_FormChangeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_BattleDirectingActivateAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_ActivateNumericalValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_CpuThinkingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_UpdateCpuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_IdName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_IsEquipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_EquipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_Buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_BattleConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratValid bEditable_EventData;
    
public:
    SS_API FKoratBattleDirectingDetails();
};

