#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSceneArea.h"
#include "SSMainMenuSubLevelDataAssetRecord.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FSSMainMenuSubLevelDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMainMenuSceneArea AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> VisibleLevels;
    
    SS_API FSSMainMenuSubLevelDataAssetRecord();
};

