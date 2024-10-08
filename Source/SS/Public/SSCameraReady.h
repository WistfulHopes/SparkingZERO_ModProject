#pragma once
#include "CoreMinimal.h"
#include "ECameraType.h"
#include "SSCameraReady.generated.h"

class ASSCutCameraActor;

USTRUCT(BlueprintType)
struct FSSCameraReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraType CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CameraInstance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SequencerStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionEndFrameCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionEndFrameLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReverseTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstConnect;
    
    SS_API FSSCameraReady();
};

