#pragma once
#include "CoreMinimal.h"
#include "ESSKeyInputType.h"
#include "KoratButtonGuideData.generated.h"

USTRUCT(BlueprintType)
struct FKoratButtonGuideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ButtonTypeHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableHoldButtonAutoKeyBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RepeatHoldButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSKeyInputType KeyInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MouseHitOff;
    
    SS_API FKoratButtonGuideData();
};

