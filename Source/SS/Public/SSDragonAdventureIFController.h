#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuSceneController.h"
#include "SSDragonAdventureIFController.generated.h"

class AActor;
class ASSCutCameraActor;
class ASSDragonAdventureIFSceneController;
class ASSLevelSequenceActor;

UCLASS(Blueprintable)
class ASSDragonAdventureIFController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFSceneController* CurrentScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFSceneController* PrevScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CutCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSLevelSequenceActor*> DirectingSeqActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DirectingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSDragonAdventureIFController(const FObjectInitializer& ObjectInitializer);

};

