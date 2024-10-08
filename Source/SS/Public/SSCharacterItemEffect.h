#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemTarget.h"
#include "KoratAiTypeDataList.h"
#include "KoratBGMDataList.h"
#include "KoratBlastActionDataList.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemCondition.h"
#include "KoratCharacterItemConditionTargetThisItem.h"
#include "KoratCharacterItemDataList.h"
#include "KoratCharacterParameterChanging.h"
#include "KoratCharacterResourceChanging.h"
#include "KoratCustomEffectColorSetting.h"
#include "SSCharacterItemEffect.generated.h"

class UKoratBuffPhaseDataAsset;
class UKoratMLSDataAsset;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FSSCharacterItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterItemConditionTargetThisItem ThisItemConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSCharacterItemTarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterParameterChanging ParameterChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterResourceChanging ResourceChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratBuffPhaseDataAsset* Buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBlastActionDataList> EnableAdditionalBlast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Accessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccessoryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCustomEffectColorSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCustomEffectColorSetting CustomEffectColorSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* ActionMLSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, UKoratMLSDataAsset*> UniqueActionMLSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* InGameActionMLSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, UKoratMLSDataAsset*> InGameUniqueActionMLSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* DemoActionMLSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, UKoratMLSDataAsset*> DemoUniqueActionMLSData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceSoundCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VoiceTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShopPreviewVoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmoteIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CombinedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList AiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AiLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyThisItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroySameItemInTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> EquipItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    SS_API FSSCharacterItemEffect();
};

