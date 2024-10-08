#pragma once
#include "CoreMinimal.h"
#include "SSDramaticEditSelectingTextData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticEditSelectingTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NowSelectingText;
    
    SS_API FSSDramaticEditSelectingTextData();
};

