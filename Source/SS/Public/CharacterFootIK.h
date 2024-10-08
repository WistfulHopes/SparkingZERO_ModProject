#pragma once
#include "CoreMinimal.h"
#include "CharacterFootIK.generated.h"

USTRUCT(BlueprintType)
struct FCharacterFootIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandIK_WaistMovementLower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandIK_WaistMovementUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandIK_AddWaistMovement;
    
    SS_API FCharacterFootIK();
};

