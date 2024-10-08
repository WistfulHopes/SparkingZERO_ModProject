#pragma once
#include "CoreMinimal.h"
#include "SSActionCameraParameterData.h"
#include "SSRecvActionCameraInfo.generated.h"

class ASSCharacter;
class ASSNewBattleCameraActor;

USTRUCT(BlueprintType)
struct FSSRecvActionCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RecvTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSActionCameraParameterData ActionCameraParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSNewBattleCameraActor* ConnectCamera;
    
    SS_API FSSRecvActionCameraInfo();
};

