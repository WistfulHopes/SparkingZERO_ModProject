#pragma once
#include "CoreMinimal.h"
#include "SSMainmenuTransitionCrossFadeData.generated.h"

class UCurveFloat;
class USSMainMenuTransitionWidget;

USTRUCT(BlueprintType)
struct FSSMainmenuTransitionCrossFadeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCossFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMainMenuTransitionWidget> Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> Curve;
    
    SS_API FSSMainmenuTransitionCrossFadeData();
};

