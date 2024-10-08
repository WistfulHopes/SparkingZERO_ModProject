#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MutualDataAsset.h"
#include "SSDRMEditTransformDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDRMEditTransformDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    USSDRMEditTransformDataAsset();

};

