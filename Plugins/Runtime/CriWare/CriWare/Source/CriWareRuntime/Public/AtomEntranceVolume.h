#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtomEntranceVolume.generated.h"

class AAtomAudioVolume;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API AAtomEntranceVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
public:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AAtomAudioVolume>> NeighbourhoodAudioVolumeArray;
    
    AAtomEntranceVolume(const FObjectInitializer& ObjectInitializer);

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
    
};

