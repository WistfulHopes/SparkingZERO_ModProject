#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonSideChanger.h"
#include "SSMenuButtonGauge.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonGauge : public USSMenuButtonSideChanger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* EffectMaterial;
    
public:
    USSMenuButtonGauge();

};

