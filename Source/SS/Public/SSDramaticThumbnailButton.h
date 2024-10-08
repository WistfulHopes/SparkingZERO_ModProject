#pragma once
#include "CoreMinimal.h"
#include "SSMenuButton.h"
#include "SSDramaticThumbnailButton.generated.h"

class USSDramaticThumbnailWidget;

UCLASS(Blueprintable, EditInlineNew)
class SS_API USSDramaticThumbnailButton : public USSMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticThumbnailWidget* ThumbnailSliseWidget;
    
public:
    USSDramaticThumbnailButton();

};

