#pragma once
#include "CoreMinimal.h"
#include "SSMenuWidget.h"
#include "SSDragonAdventureIFCTEpisodeResultCharaWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCTEpisodeResultCharaWidget : public USSMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataIndex;
    
public:
    USSDragonAdventureIFCTEpisodeResultCharaWidget();

};

