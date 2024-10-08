#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EKoratDestructionObjectType.h"
#include "KoratDestructionAttackParameterDataList.h"
#include "KoratDestructionManager.generated.h"

class AFieldSystemActor;

UCLASS(Blueprintable)
class UKoratDestructionManager : public UObject {
    GENERATED_BODY()
public:
    UKoratDestructionManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FBoxSphereBounds RecievePostFieldCreation(AFieldSystemActor* MasterField, const FVector& Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckActorTouchDestructionEvent(EKoratDestructionObjectType DestructionObjectype, FKoratDestructionAttackParameterDataList AttackParameterType);
    
};

