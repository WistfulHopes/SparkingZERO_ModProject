#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSHitEffectType.h"
#include "KoratArmorBreakLevelData.h"
#include "KoratArmorData.h"
#include "KoratArmorDataList.h"
#include "KoratArmorLevelDataList.h"
#include "KoratCharacterDataArmorLevelParameter.h"
#include "SSCharacterArmor.generated.h"

class UKoratArmorBreakLevelDataAsset;
class UKoratArmorDataAsset;
class UKoratArmorLevelDataAsset;
class ULevelSequence;
class USSCharacterNumeric;

UCLASS(Blueprintable)
class USSCharacterArmor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratArmorDataAsset* ArmorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratArmorBreakLevelDataAsset* ArmorBreakLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratArmorLevelDataAsset* ArmorLevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCharacterNumeric* CharacterNumeric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratArmorData> ArmorParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratArmorBreakLevelData> ArmorBreakLevelParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterDataArmorLevelParameter> ArmorLevelParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxArmorBreakLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSHitEffectType, TSoftObjectPtr<ULevelSequence>> LevelSequenceHitTypeArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceArmorBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratArmorLevelDataList ArmorLevelDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThereHyperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSparkingArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ArmorLevelSourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UseArmorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataArmorLevelParameter DebugArmorLevelParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArmorDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratArmorDataList DebugDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugDetailLevel;
    
public:
    USSCharacterArmor();

};

