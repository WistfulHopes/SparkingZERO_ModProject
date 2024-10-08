#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState_Trail.h"
#include "SSAnimNotifyState_Trail.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyState_Trail : public UAnimNotifyState_Trail {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ParameterColor;
    
public:
    USSAnimNotifyState_Trail();

};

