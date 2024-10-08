#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSDragonAdventureIFSceneController.h"
#include "SSDragonAdventureIFCharacterSelectController.generated.h"

class ASSCutCameraActor;
class ASSDragonAdventureIFCSCharacterManager;
class ASSLevelSequenceActor;
class AStaticMeshActor;
class USSDragonAdventureIFCSManager;
class USSMenuGeneralDialog;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSDragonAdventureIFCharacterSelectController : public ASSDragonAdventureIFSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFCSCharacterManager* CharacterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCSManager* SelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CutCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* DirectingSeqActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* OffSetPosActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSDragonAdventureIFCharacterSelectController(const FObjectInitializer& ObjectInitializer);

};

