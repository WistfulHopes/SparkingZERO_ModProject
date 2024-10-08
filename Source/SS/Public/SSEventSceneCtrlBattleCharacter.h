#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneCtrlBattleCharacter.generated.h"

class ASSCharacter;
class UKoratMLSDataAsset;

USTRUCT(BlueprintType)
struct FSSEventSceneCtrlBattleCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* MlsDataAsset;
    
    SS_API FSSEventSceneCtrlBattleCharacter();
};

