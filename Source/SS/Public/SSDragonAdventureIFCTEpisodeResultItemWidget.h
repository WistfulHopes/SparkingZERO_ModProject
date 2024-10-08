#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSDragonAdventureIFCTEpisodeResultItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTEpisodeResultItemWidget : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataIndex;
    
public:
    USSDragonAdventureIFCTEpisodeResultItemWidget();

};

