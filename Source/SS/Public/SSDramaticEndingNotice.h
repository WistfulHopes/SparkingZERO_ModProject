#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSDramaticEndingNotice.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEndingNotice : public USSUiWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TitleTextBlockName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* TextBlock;
    
public:
    USSDramaticEndingNotice();

};

