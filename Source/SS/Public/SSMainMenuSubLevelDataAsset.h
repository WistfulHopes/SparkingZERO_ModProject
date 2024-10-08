#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMainMenuSubLevelDataAssetRecord.h"
#include "SSMainMenuSubLevelDataAsset.generated.h"

class UWorld;

UCLASS(Blueprintable)
class USSMainMenuSubLevelDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> AlwaysVisibleLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSMainMenuSubLevelDataAssetRecord> Records;
    
    USSMainMenuSubLevelDataAsset();

};

