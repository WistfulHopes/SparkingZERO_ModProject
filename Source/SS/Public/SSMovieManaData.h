#pragma once
#include "CoreMinimal.h"
#include "SSMovieManaData.generated.h"

class UManaSource;

USTRUCT(BlueprintType)
struct FSSMovieManaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UManaSource> ManaSource;
    
    SS_API FSSMovieManaData();
};

