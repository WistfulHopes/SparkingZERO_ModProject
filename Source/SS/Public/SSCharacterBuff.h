#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterBuff.generated.h"

class UKoratCharacterBuffDataAsset;

UCLASS(Blueprintable)
class USSCharacterBuff : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterBuffDataAsset* BuffData;
    
public:
    USSCharacterBuff();

};

