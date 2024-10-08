#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticCutIDsData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticCutIDsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CutIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThumbnailCut;
    
    FKoratDramaticCutIDsData();
};

