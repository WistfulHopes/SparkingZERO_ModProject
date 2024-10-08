#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuSceneController.h"
#include "SSDramaticEventBaseController.generated.h"

class ASSCutCameraActor;
class ASSEventSceneScript;
class ASSUiFaderHUD;
class ULevelStreamingDynamic;
class USSDramaticBattleDataRecordAsset;
class USSEventSceneDataAsset;

UCLASS(Blueprintable)
class ASSDramaticEventBaseController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDulationEventScriptStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FadeColorEventScriptStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSEventSceneScript* Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CutCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> EventSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* DramaticBattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSEventSceneDataAsset* EventSceneDataAsset;
    
public:
    ASSDramaticEventBaseController(const FObjectInitializer& ObjectInitializer);

};

