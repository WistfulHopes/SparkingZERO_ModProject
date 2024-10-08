#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSWCTWishSelectorTitle.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSWCTWishSelectorTitle : public USSUiWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* caption;
    
    USSWCTWishSelectorTitle();

};

