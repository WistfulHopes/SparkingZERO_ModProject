#pragma once
#include "CoreMinimal.h"
#include "KoratPlatformImageDataList.h"
#include "SSDramaticBattleTipsData.generated.h"

USTRUCT(BlueprintType)
struct FSSDramaticBattleTipsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlatformImageDataList ImageData;
    
    SS_API FSSDramaticBattleTipsData();
};

