#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterDataCameraParameter.h"
#include "SSCharacterCamera.generated.h"

class USSCameraDataAsset;

UCLASS(Blueprintable)
class USSCharacterCamera : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSCameraDataAsset* CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterDataCameraParameter Parameter;
    
public:
    USSCharacterCamera();

};

