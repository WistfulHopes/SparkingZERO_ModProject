#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "KoratCharacterEffectColorSetData.h"
#include "KoratCharacterPointLightData.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratInteractAttributeData.h"
#include "KoratSequencePlayInfo.h"
#include "KoratSequencerMarkerInfo.h"
#include "SSLevelSequencePlayer.generated.h"

class AActor;
class AKoratSequenceSoundPlayer;
class ULevelSequence;

UCLASS(Blueprintable)
class USSLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChargeLv;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* SelectedLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencerMarkerInfo> MarkerInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSequencePlayInfo> SequencerPlayInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayInfoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionDataKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterEffectColorSetData CharacterEffectColorSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsableCharacterEffectColorSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail EffectMultipleColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData WorldToonPointLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratInteractAttributeData InteractData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AKoratSequenceSoundPlayer*> SequenceSoundPlayers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedId;
    
public:
    USSLevelSequencePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSequencerPlaySeqNextLabel(const FName Label, const FName NewNextLabel);
    
    UFUNCTION(BlueprintCallable)
    void PlayerStopDelegate();
    
};

