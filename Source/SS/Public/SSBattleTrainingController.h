#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSMenuSceneController.h"
#include "SSBattleTrainingController.generated.h"

class ASSBattleTrainingCharacter;
class ASSBattleTrainingTextArea;
class ASSCutCameraActor;
class ASSLevelSequenceActor;
class USSMenuManager;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSBattleTrainingController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CutCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* SceneSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USSMenuManager*> SelectMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASSBattleTrainingCharacter*> CharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSBattleTrainingTextArea* TextArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
public:
    ASSBattleTrainingController(const FObjectInitializer& ObjectInitializer);

};

