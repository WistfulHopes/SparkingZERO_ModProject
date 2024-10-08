#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSSimpleAimTargetType.h"
#include "SSAnimNotifyState.h"
#include "SSAnimNotifyStateUpdateAIM.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyStateUpdateAIM : public USSAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSimpleAimTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    USSAnimNotifyStateUpdateAIM();

};

