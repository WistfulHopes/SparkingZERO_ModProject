#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterEffectHighSpeedMove.generated.h"

class USSEffectHighSpeedMoveDataAsset;

UCLASS(Blueprintable)
class USSCharacterEffectHighSpeedMove : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEffectHighSpeedMoveDataAsset* EffectHighSpeedMoveData;
    
public:
    USSCharacterEffectHighSpeedMove();

};

