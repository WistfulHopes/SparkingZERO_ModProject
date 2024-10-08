#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFExhibitionSetting.generated.h"

USTRUCT(BlueprintType)
struct FSSDragonAdventureIFExhibitionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EndEvent;
    
    SS_API FSSDragonAdventureIFExhibitionSetting();
};

