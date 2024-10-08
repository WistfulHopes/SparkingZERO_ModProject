#pragma once
#include "CoreMinimal.h"
#include "EExhibitionType.h"
#include "EKoratBattleSearchType.h"
#include "EKoratUnLockType.h"
#include "KoratActionDataList.h"
#include "KoratAuraLevelDataList.h"
#include "KoratBattleOperationGuideDataList.h"
#include "KoratCharacterCannotTransitionAction.h"
#include "KoratCharacterDataAbilityFlag.h"
#include "KoratCharacterDataActionFlag.h"
#include "KoratCharacterDataBattleAssets.h"
#include "KoratCharacterDataBlastComboParameter.h"
#include "KoratCharacterDataCommonAssets.h"
#include "KoratCharacterDataCostumeParameter.h"
#include "KoratCharacterDataNameInfo.h"
#include "KoratCharacterDataStorySettingParameter.h"
#include "KoratCharacterDataSubInstanceAsset.h"
#include "KoratCharacterDataUnderWaterEffectParameter.h"
#include "KoratCharacterEffectColorSetDataTypeDataList.h"
#include "KoratCharacterFigureDataList.h"
#include "KoratCharacterFootParameter.h"
#include "KoratCharacterItemDataList.h"
#include "KoratVelocityLineEffectDataList.h"
#include "KoratVelocityLineEffectTypeDataList.h"
#include "SSAiCharacterDataList.h"
#include "SSFateDataList.h"
#include "KoratCharacterDataAssetRecord.generated.h"

class UKoratBuffPhaseDataAsset;
class UKoratCharacterCombinationDataAsset;
class UKoratCharacterMLSDataAsset;
class UKoratSoundDataAsset;
class ULevelSequence;
class USSAnimInstance;
class USSCharacterUiDataAsset;
class USSEffectColorDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlNumId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockType UnLockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EExhibitionType> ValidExhibitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstallPlayable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNpcChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataCostumeParameter> Costumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterFigureDataList CharacterFigure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSAnimInstance> AnimationBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSAnimInstance> AnimationBlueprintForSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSAnimInstance> AnimationBlueprintForEventUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterMLSDataAsset* CharacterMLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterCombinationDataAsset* CharacterCombination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterEffectColorSetDataTypeDataList, USSEffectColorDataAsset*> EffectColorDataTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAuraLevelDataList BattleAlwaysAuraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAuraLevelDataList AlwaysAuraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSearchType, TSoftObjectPtr<ULevelSequence>> OverrideAuraSearchEffectSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratVelocityLineEffectTypeDataList, FKoratVelocityLineEffectDataList> OverrideVelocityLineEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataCommonAssets CommonAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterUiDataAsset* UIAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataBattleAssets BattleAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBuffPhaseDataAsset* SparkingBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRefrectFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataAbilityFlag AbilityFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataBlastComboParameter BlastComboParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataActionFlag ActionFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterCannotTransitionAction> CannotTransitionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratActionDataList> OverrideAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataSubInstanceAsset> SubInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataStorySettingParameter StorySettingParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSoundDataAsset* SoundDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataNameInfo NameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiCharacterDataList AiCharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> DefaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSFateDataList FateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataUnderWaterEffectParameter UnderWaterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDrownOutableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleOperationGuideDataList> KoratOperationGuideDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterFootParameter FootParams;
    
    SS_API FKoratCharacterDataAssetRecord();
};

