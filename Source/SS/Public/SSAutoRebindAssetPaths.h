#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSAutoRebindAssetPaths.generated.h"

USTRUCT(BlueprintType)
struct FSSAutoRebindAssetPaths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelSequencePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MapPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RebindRegexPattern;
    
    SS_API FSSAutoRebindAssetPaths();
};

