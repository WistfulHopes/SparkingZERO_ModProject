#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFCTMapWidget.h"
#include "SSDragonAdventureIFCTMapThumbWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTMapThumbWidget : public USSDragonAdventureIFCTMapWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThumbnailIndex;
    
public:
    USSDragonAdventureIFCTMapThumbWidget();

};

