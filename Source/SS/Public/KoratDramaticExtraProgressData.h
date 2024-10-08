#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticExtraProgressData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticExtraProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowProgressNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCleard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnlocked;
    
    FKoratDramaticExtraProgressData();
};

