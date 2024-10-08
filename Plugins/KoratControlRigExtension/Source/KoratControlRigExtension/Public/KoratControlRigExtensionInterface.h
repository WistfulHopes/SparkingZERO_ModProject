#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "KoratControlRigExtensionInterface.generated.h"

class UControlRig;

UINTERFACE(Blueprintable)
class UKoratControlRigExtensionInterface : public UInterface {
    GENERATED_BODY()
};

class IKoratControlRigExtensionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UControlRig> GetOverwriteLimitsClass(const UClass* InClass) const;
    
};

