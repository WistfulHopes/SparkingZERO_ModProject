#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSStageSelectLevelSequenceController.generated.h"

class ASSChameleon;
class ASSCharacter;
class ASSLevelSequenceActor;
class ASSUiSubLevelManager;
class UTexture2D;

UCLASS(Blueprintable)
class ASSStageSelectLevelSequenceController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* StageChangeLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSUiSubLevelManager* StageSelectSubLevelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSChameleon* Chameleon;
    
public:
    ASSStageSelectLevelSequenceController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadMap();
    
    UFUNCTION(BlueprintCallable)
    void SwitchLoadedMap();
    
    UFUNCTION(BlueprintCallable)
    void LoadMap();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetChangeStageImage();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetChameleon();
    
};

