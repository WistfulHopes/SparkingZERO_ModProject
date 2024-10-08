#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KoratActorIdentityInterface.h"
#include "SSEventVoicePlayer.generated.h"

UCLASS(Blueprintable)
class SS_API ASSEventVoicePlayer : public AActor, public IKoratActorIdentityInterface {
    GENERATED_BODY()
public:
    ASSEventVoicePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopEventNarratorVoice();
    
    UFUNCTION(BlueprintCallable)
    void StopEventCharaVoice();
    
    UFUNCTION(BlueprintCallable)
    void PlayEventNarratorVoice(const FString& InSoundName, float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void PlayEventCharaVoiceByID(const int32 InSoundId, float InVolume, bool IsLipSync);
    
    UFUNCTION(BlueprintCallable)
    void PlayEventCharaVoice(const FString& InSoundName, float InVolume, bool IsLipSync);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharaVoice(const int32 InSoundCueID, float InVolume);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    

    // Fix for true pure virtual functions not being implemented
};

