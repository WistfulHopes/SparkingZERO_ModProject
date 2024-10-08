#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Animation/AnimTypes.h"
#include "SSAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMontageNotifyTickType::Type> DefaultMontageTickType;
    
public:
    USSAnimNotify();

};

