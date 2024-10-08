#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditPictureDataAsset.generated.h"

class USSDRMEditPictureDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditPictureDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSDRMEditPictureDataAsset*> PtrRecords;
    
public:
    UKoratDRMEditPictureDataAsset();

};

