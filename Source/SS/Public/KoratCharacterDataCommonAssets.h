#pragma once
#include "CoreMinimal.h"
#include "AdditionalBlastData.h"
#include "KoratBlastActionDataList.h"
#include "KoratCharacterDataCommonAssets.generated.h"

class UKoratArmorLevelDataAsset;
class UKoratCharacterAutoUpdateDataAsset;
class UKoratCharacterBuffDataAsset;
class UKoratReplaceTransitionActionDataAsset;
class UKoratSearchParamDataAsset;
class USSActionEffectDataAsset;
class USSAnnounceDataAsset;
class USSAuraAssignDataAsset;
class USSAuraDataAsset;
class USSBlastForteDataAsset;
class USSBlastSkillDataAsset;
class USSBlastUltimateDataAsset;
class USSBulletSettingDataAsset;
class USSBulletVisualDataAsset;
class USSCameraDataAsset;
class USSCharacterBuffFormDataAsset;
class USSCharacterCombativesDataAsset;
class USSCharacterSubtitlesDataAsset;
class USSChargeDataAsset;
class USSDashUpDownDataAsset;
class USSDragonDashDataAsset;
class USSDragonHomingDataAsset;
class USSEffectHighSpeedMoveDataAsset;
class USSEyeInformationDataAsset;
class USSFormChangeDataAsset;
class USSMovementDataAsset;
class USSNumericDataAsset;
class USSOutlineDataAsset;
class USSRevengeDashDataAsset;
class USSScreenDataAsset;
class USSStepsDataAsset;
class USSZBurstDashDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterDataCommonAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSNumericDataAsset* NumericData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMovementDataAsset* MovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSStepsDataAsset* StepsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonDashDataAsset* DragonDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonHomingDataAsset* DragonHomingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSZBurstDashDataAsset* ZBurstDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRevengeDashDataAsset* RevengeDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAuraDataAsset* AuraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAuraAssignDataAsset* AuraAssignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSOutlineDataAsset* OutlineData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSChargeDataAsset* ChargeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSFormChangeDataAsset* FormChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratArmorLevelDataAsset* ArmorLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterCombativesDataAsset* CombativesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratReplaceTransitionActionDataAsset* IndividualReplaceTransitionActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastForteDataAsset* BlastForte1Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastForteDataAsset* BlastForte2Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastSkillDataAsset* BlastSkill1Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastSkillDataAsset* BlastSkill2Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBlastUltimateDataAsset* BlastUltimateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratBlastActionDataList, FAdditionalBlastData> AdditionalBlastData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletSettingDataAsset* BulletSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBulletVisualDataAsset* BulletVisualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCameraDataAsset* CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSActionEffectDataAsset* EffectActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEffectHighSpeedMoveDataAsset* EffectHighSpeedMoveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAnnounceDataAsset* AnnounceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSScreenDataAsset* ScreenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDashUpDownDataAsset* DashUpDownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratSearchParamDataAsset* SearchParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterBuffDataAsset* BuffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterAutoUpdateDataAsset* AutoUpdateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEyeInformationDataAsset* EyeInformationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterBuffFormDataAsset* BuffFormData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterSubtitlesDataAsset* SubtitlesData;
    
    SS_API FKoratCharacterDataCommonAssets();
};

