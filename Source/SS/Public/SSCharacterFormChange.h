#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterFormChange.generated.h"

class USSFormChangeDataAsset;

UCLASS(Blueprintable)
class USSCharacterFormChange : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSFormChangeDataAsset* FormChangeData;
    
public:
    USSCharacterFormChange();

};

