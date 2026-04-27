#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunBehavior.h"
#include "SSAiUBTTask_RunBehavior.generated.h"

UCLASS(Blueprintable)
class USSAiUBTTask_RunBehavior : public UBTTask_RunBehavior {
    GENERATED_BODY()
public:
    USSAiUBTTask_RunBehavior();
    virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;
    virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;

};

