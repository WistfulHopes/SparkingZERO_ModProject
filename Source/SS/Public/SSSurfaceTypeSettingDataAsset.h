#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "MutualDataAsset.h"
#include "SSSurfaceTypeSettingDataAssetRecord.h"
#include "SSSurfaceTypeSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class USSSurfaceTypeSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FSSSurfaceTypeSettingDataAssetRecord> RecordsByDataList;
    
public:
    USSSurfaceTypeSettingDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

