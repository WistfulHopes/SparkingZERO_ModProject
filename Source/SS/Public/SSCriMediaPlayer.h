#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESSMovieSoundCategory.h"
#include "KoratBGMDataList.h"
#include "SSCriMediaPlayerSetupParameter.h"
#include "SSCriMediaPlayer.generated.h"

class ASSCriMediaPlayer;
class UImage;
class UManaComponent;
class UManaSource;
class UManaTexture;
class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USSMovieSubtitlePlayer;
class UStaticMeshComponent;
class UUserWidget;

UCLASS(Blueprintable)
class SS_API ASSCriMediaPlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossfadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SESoundCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceSoundCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UManaSource> ManaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UManaTexture*> ManaTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> ManaMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicManaMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* UserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ManaPlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeStartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeEndAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStopBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMovieSoundCategory MovieSoundCategory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UManaComponent*> ManaComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAddToViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundPreviosTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMovieSubtitlePlayer* MovieSubtitlePlayer;
    
public:
    ASSCriMediaPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ASSCriMediaPlayer* Spawn();
    
    UFUNCTION(BlueprintCallable)
    void Setup(FSSCriMediaPlayerSetupParameter& InParameter, bool IsPlayFullScreen);
    
    UFUNCTION(BlueprintCallable)
    bool Resume();
    
    UFUNCTION(BlueprintCallable)
    bool Play(bool bInPlayNextTick);
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool Open(TSoftObjectPtr<UManaSource> InManaSource, bool bInPlayOnOpen, bool bInLoop, float InCrossFadeDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrossFading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishCrossFade();
    
    UFUNCTION(BlueprintCallable)
    static bool Destroy(ASSCriMediaPlayer* InMediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

