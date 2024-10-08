#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "SSCameraCompositeActor.generated.h"

class ASSCutCameraDirector;

UCLASS(Blueprintable)
class ASSCameraCompositeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoReloadAssetFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoConvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutoHandyShakeConvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixCameraSlot0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMenuCameraCompose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirtyForCompositePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEvaluate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASSCutCameraDirector> MenuCameraDirectorClass;
    
public:
    ASSCameraCompositeActor(const FObjectInitializer& ObjectInitializer);

};

