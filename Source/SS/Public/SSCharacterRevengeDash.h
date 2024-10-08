#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataRevengeDashParameter.h"
#include "SSCharacterRevengeDash.generated.h"

class USSRevengeDashDataAsset;

UCLASS(Blueprintable)
class USSCharacterRevengeDash : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRevengeDashDataAsset* RevengeDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataRevengeDashParameter MovementParameter;
    
public:
    USSCharacterRevengeDash();

};

