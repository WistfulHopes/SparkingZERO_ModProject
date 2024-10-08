#pragma once
#include "CoreMinimal.h"
#include "EKoratSafeSpawnAreaSize.h"
#include "EKoratStyleChangeSPRecoveryMode.h"
#include "KoratCharacterDataChangeCharacterActionDataList.h"
#include "KoratCharacterDataList.h"
#include "SSUnionSupportCharacter.h"
#include "KoratCharacterDataFormChangeParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataFormChangeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList ChangeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepCostumeFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepCostumeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CostumeDamageFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConsumeBlastStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratStyleChangeSPRecoveryMode StyleChangeSPRecoveryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSUnionSupportCharacter> UnionSupportCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataChangeCharacterActionDataList ChangeCharacterActinData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSafeSpawnAreaSize SafeSpawnAreaSize;
    
    SS_API FKoratCharacterDataFormChangeParameter();
};

