#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSSubLevelLoadParamsDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSSubLevelLoadParamsDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LevelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialyVisible;
    
    SS_API FSSSubLevelLoadParamsDataAssetRecord();
};

