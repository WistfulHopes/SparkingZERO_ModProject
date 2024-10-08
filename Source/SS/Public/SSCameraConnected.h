#pragma once
#include "CoreMinimal.h"
#include "ERootDirectorReconnectPriorityType.h"
#include "SSCameraConnectedLastParameter.h"
#include "SSCameraConnected.generated.h"

class ASSCutCameraActor;

USTRUCT(BlueprintType)
struct FSSCameraConnected {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CameraInstance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SequencerStartTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SequencerCloseStartTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SequencerLeaveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequencerCloseTimeCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequencerCloseTimeLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionEndFrameCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionEndFrameLat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReverseTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThirdCameraCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERootDirectorReconnectPriorityType ReconnectPriorityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCameraConnectedLastParameter LastParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePriorityDownDelay;
    
    SS_API FSSCameraConnected();
};

