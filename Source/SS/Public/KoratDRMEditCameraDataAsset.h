#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditCameraDataAsset.generated.h"

class USSDRMEditCameraDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditCameraDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditCameraDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditCameraDataAsset();

};

