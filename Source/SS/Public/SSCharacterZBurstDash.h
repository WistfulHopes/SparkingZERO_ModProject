#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataZBurstDashParameter.h"
#include "SSCharacterZBurstDash.generated.h"

class USSZBurstDashDataAsset;

UCLASS(Blueprintable)
class USSCharacterZBurstDash : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSZBurstDashDataAsset* ZBurstDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataZBurstDashParameter MovementParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataZBurstDashParameter ScaledMovementParameter;
    
public:
    USSCharacterZBurstDash();

};

