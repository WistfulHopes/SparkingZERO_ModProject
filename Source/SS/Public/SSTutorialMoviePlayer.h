#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratMovieItemDataList.h"
#include "SSTutorialMovieGuideWidgets.h"
#include "SSTutorialMoviePlayer.generated.h"

class ASSCriMediaPlayer;
class ASSMediaPlayer;
class ASSUiFaderHUD;
class USSMenuButton;
class USSTutorialMovieMenu;
class UUserWidget;

UCLASS(Blueprintable)
class ASSTutorialMoviePlayer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieItemDataList MovieItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCriMediaPlayer* CriMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSTutorialMovieMenu* TutorialMovieMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* TutorialMovieWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSTutorialMovieGuideWidgets MovieGuideWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayingLoopSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlackOutElapsed;
    
public:
    ASSTutorialMoviePlayer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSkipButtonHoldProgress(USSMenuButton* InButton, float InProgress);
    
};

