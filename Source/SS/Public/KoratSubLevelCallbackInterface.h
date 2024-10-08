#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KoratSubLevelCallbackInterface.generated.h"

UINTERFACE(Blueprintable)
class UKoratSubLevelCallbackInterface : public UInterface {
    GENERATED_BODY()
};

class IKoratSubLevelCallbackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayMapReadyCallback();
    
};

