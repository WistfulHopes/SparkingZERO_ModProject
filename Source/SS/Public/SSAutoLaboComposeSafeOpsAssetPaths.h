#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSAutoLaboComposeSafeOpsAssetPaths.generated.h"

USTRUCT(BlueprintType)
struct FSSAutoLaboComposeSafeOpsAssetPaths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelSequencePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AnotherLevelSequencePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MapPath;
    
    SS_API FSSAutoLaboComposeSafeOpsAssetPaths();
};

