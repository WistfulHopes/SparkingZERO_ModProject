#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSWCTSubtitle.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSWCTSubtitle : public USSUiWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBody;
    
    USSWCTSubtitle();

};

