#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterMoveParameterChanging.h"
#include "KoratCharacterMoveParameterChangingSet.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterMoveParameterChangingSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterMoveParameterChanging NormalMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterMoveParameterChanging HighSpeedMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuperHighSpeedMoveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterMoveParameterChanging ShortDashMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterMoveParameterChanging DragonDashMove;
    
    SS_API FKoratCharacterMoveParameterChangingSet();
};

