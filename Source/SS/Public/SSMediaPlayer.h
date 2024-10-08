#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSMediaPlayerSetupParameter.h"
#include "SSMediaPlayer.generated.h"

class ASSMediaPlayer;
class UImage;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMediaPlayer;
class UMediaSoundComponent;
class UMediaSource;
class UMediaTexture;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class SS_API ASSMediaPlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossfadeDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* MediaSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMediaPlayer*> MediaPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMediaTexture*> MediaTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MediaPlayerNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureLerpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeStartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeEndAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossFadeCurrentTime;
    
public:
    ASSMediaPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ASSMediaPlayer* Spawn();
    
    UFUNCTION(BlueprintCallable)
    void Setup(const FSSMediaPlayerSetupParameter& InParameter);
    
    UFUNCTION(BlueprintCallable)
    bool Resume();
    
    UFUNCTION(BlueprintCallable)
    bool Play(bool bInPlayNextTick);
    
    UFUNCTION(BlueprintCallable)
    bool Pause();
    
    UFUNCTION(BlueprintCallable)
    bool Open(UMediaSource* InMediaSource, bool bInPlayOnOpen, bool bInLoop, float InCrossFadeDuration);
    
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
    static bool Destroy(ASSMediaPlayer* InMediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

