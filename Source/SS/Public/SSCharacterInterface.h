#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "KoratLipsMouthInfo.h"
#include "SSCharacterInterface.generated.h"

class UKoratKawaiiPhysicsComponent;
class USSCharacterSwitchVisibilityAnimInstance;

UINTERFACE(Blueprintable)
class USSCharacterInterface : public UInterface {
    GENERATED_BODY()
};

class ISSCharacterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChartsVariable(const float InValueA, const float InValueB, const float InLogVolume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetViewSwitchFaceMeshVisibilityValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USSCharacterSwitchVisibilityAnimInstance* GetViewSwitchAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSocketLocation(const FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FKoratLipsMouthInfo GetMouthInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UKoratKawaiiPhysicsComponent* GetKawaiiPhysicsComponent() const;
    
};

