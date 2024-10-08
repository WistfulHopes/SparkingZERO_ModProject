#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotify.h"
#include "SSAnimNotifyViewSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotifyViewSwitch : public USSAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    USSAnimNotifyViewSwitch();

};

