#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotify.h"
#include "SSAnimNotifyReleseSection.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotifyReleseSection : public USSAnimNotify {
    GENERATED_BODY()
public:
    USSAnimNotifyReleseSection();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSparkingChargeLv() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetChargeLv() const;
    
};

