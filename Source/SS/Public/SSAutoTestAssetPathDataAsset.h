#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSAutoLaboComposeSafeOpsAssetPaths.h"
#include "SSAutoRebindAssetPaths.h"
#include "SSAutoTestAssetPathDataAsset.generated.h"

UCLASS(Blueprintable)
class USSAutoTestAssetPathDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAutoLaboComposeSafeOpsAssetPaths LaboComposeSafeOps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSAutoRebindAssetPaths Rebind;
    
public:
    USSAutoTestAssetPathDataAsset();

};

