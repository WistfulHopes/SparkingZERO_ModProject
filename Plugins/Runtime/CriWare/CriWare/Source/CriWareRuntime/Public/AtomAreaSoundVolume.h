#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "AtomAreaSoundVolume.generated.h"

class UAtomComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API AAtomAreaSoundVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableAtomCompoentPack;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeterminationFromVolumeBoundaryPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRepeatPlayWhenSoundStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> AtomComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> Sounds;
    
    AAtomAreaSoundVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPriority(float NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroySounds();
    
    UFUNCTION(BlueprintCallable)
    TArray<UAtomComponent*> CreateSounds(FVector listener_location);
    
};

