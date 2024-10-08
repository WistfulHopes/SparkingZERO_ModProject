#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.h"
#include "MutualDataAsset.h"
#include "SSDRMEditSceneTransformDataAsset.generated.h"

class USSDRMEditTransformDataAsset;

UCLASS(Blueprintable)
class USSDRMEditSceneTransformDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapDataList, USSDRMEditTransformDataAsset*> Transforms;
    
public:
    USSDRMEditSceneTransformDataAsset();

};

