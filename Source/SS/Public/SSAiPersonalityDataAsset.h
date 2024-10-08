#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EAiSparkingComboPersonalityType.h"
#include "SSAiActionEmotionParam.h"
#include "SSAiAddEmotionParam.h"
#include "SSAiCharacterDamageParam.h"
#include "SSAiCharacterEmotionParam.h"
#include "SSAiEmotionParam.h"
#include "SSAiPersonalityDataAsset.generated.h"

UCLASS(Blueprintable)
class USSAiPersonalityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiEmotionParam EmotionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam RemainingHpParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam RemainingEnergyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam RemainingMembersParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiActionEmotionParam> TargetActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiActionEmotionParam> MyselfActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAiAddEmotionParam ImpactParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiCharacterEmotionParam> Rivals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiCharacterEmotionParam> Allies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiCharacterDamageParam> CharacterChangeRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAiCharacterDamageParam> CharacterTransformRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAiSparkingComboPersonalityType SparkingComboType;
    
    USSAiPersonalityDataAsset();

};

