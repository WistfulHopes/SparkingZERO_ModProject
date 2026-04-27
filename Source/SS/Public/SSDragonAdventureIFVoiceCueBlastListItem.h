#pragma once
#include "CoreMinimal.h"
#include "SSDragonAdventureIFVoiceCueBlastListItem.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSDragonAdventureIFVoiceCueBlastListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CueIds;
    
    FSSDragonAdventureIFVoiceCueBlastListItem();
};

