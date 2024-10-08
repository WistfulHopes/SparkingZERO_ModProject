#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EKoratDestructionAttackParameterType.h"
#include "EKoratDestructionDamageLevel.h"
#include "Templates/SubclassOf.h"
#include "KoratDestructionAttackParameter.generated.h"

class AFieldSystemActor;
class UKoratInteractKnockDataAsset;

USTRUCT(BlueprintType)
struct FKoratDestructionAttackParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDestructionAttackParameterType AttackParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDestructionDamageLevel DamageLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFieldSystemActor> MasterField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FieldDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractKnockDataAsset* InteractData;
    
    SS_API FKoratDestructionAttackParameter();
};

