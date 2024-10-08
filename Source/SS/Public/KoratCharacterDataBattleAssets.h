#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataFormChangeParameter.h"
#include "KoratCharacterDataFusionParameter.h"
#include "KoratCharacterDataPotaraParameter.h"
#include "KoratCharacterDataBattleAssets.generated.h"

class AActor;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FKoratCharacterDataBattleAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> CameraBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DifferentCostumeIDBeforeChangeCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataFormChangeParameter> FormChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataFusionParameter> Fusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataPotaraParameter> Potara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DuringInvincibilityPlayLevelSequence;
    
    SS_API FKoratCharacterDataBattleAssets();
};

