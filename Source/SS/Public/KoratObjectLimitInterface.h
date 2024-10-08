#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KoratObjectLimitDataList.h"
#include "KoratOrientedBox.h"
#include "KoratObjectLimitInterface.generated.h"

UINTERFACE(Blueprintable)
class UKoratObjectLimitInterface : public UInterface {
    GENERATED_BODY()
};

class IKoratObjectLimitInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectLimit_StartDying();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ObjectLimit_IsNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ObjectLimit_IsAlive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ObjectLimit_GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FKoratObjectLimitDataList ObjectLimit_GetGroupID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FKoratOrientedBox ObjectLimit_GetBoundingBox();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ObjectLimit_Die();
    
};

