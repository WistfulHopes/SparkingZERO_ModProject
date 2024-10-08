#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditSceneTransformDataAsset.generated.h"

class USSDRMEditSceneTransformDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditSceneTransformDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditSceneTransformDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditSceneTransformDataAsset();

};

