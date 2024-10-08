#pragma once
#include "CoreMinimal.h"
#include "SSCutCameraDirector.h"
#include "SSMenuCameraDirector.generated.h"

class ASSCharacter;
class ASSUiLevelScriptActor;

UCLASS(Blueprintable)
class ASSMenuCameraDirector : public ASSCutCameraDirector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPhysicalDisparityEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugRelativeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> PhysicalDisparityTargetPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> PhysicalDisparityTargetEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetLocationFpsCameraLatAndFocusTargetFrameOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachedFpsCameraLatAndFocusTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSUiLevelScriptActor> ParentUiLevel;
    
public:
    ASSMenuCameraDirector(const FObjectInitializer& ObjectInitializer);

};

