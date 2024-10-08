#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSGalleryPictureBookLocalSingleton.generated.h"

class UKoratMLSDataAsset;

UCLASS(Blueprintable)
class USSGalleryPictureBookLocalSingleton : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* MlsDataAsset;
    
public:
    USSGalleryPictureBookLocalSingleton();

};

