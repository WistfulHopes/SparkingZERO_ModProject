#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonSideChanger.h"
#include "SSMenuButtonGaugeAlpha.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuButtonGaugeAlpha : public USSMenuButtonSideChanger {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* EffectMaterial;
    
public:
    USSMenuButtonGaugeAlpha();

};

