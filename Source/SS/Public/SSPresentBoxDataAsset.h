#pragma once
#include "CoreMinimal.h"
#include "ESSPresentBoxUIType.h"
#include "MutualDataAsset.h"
#include "SSPresentBoxDataAsset.generated.h"

UCLASS(Blueprintable)
class USSPresentBoxDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSPresentBoxUIType, TSoftClassPtr<UObject>> UIAssetMap;
    
public:
    USSPresentBoxDataAsset();

};

