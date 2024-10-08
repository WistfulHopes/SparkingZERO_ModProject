#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterScreen.generated.h"

class USSScreenDataAsset;

UCLASS(Blueprintable)
class USSCharacterScreen : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSScreenDataAsset* ScreenData;
    
    USSCharacterScreen();

};

