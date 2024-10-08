#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotifyState.h"
#include "SSSimpleAimLookatAimParameter.h"
#include "SSAnimNotifyStateEnableAIM.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyStateEnableAIM : public USSAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSSimpleAimLookatAimParameter AimParameter;
    
public:
    USSAnimNotifyStateEnableAIM();

};

