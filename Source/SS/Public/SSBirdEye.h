#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SSBirdEye.generated.h"

UCLASS(Blueprintable)
class USSBirdEye : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform birdEyePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform saveViewportCameraPose;
    
    USSBirdEye();

    UFUNCTION(BlueprintCallable)
    void ChangeActive(bool IsSet, FVector cameraPos, FRotator cameraRot);
    
};

