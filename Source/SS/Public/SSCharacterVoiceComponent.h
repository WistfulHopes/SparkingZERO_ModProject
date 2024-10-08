#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharaVoiceOnEventDispatherDelegate.h"
#include "ECharacterVoiceStatus.h"
#include "KoratCharacterCostumeDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratSoundHandle.h"
#include "SSCharacterVoiceComponent.generated.h"

class ASSCharacter;
class USSRandom;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterVoiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaVoiceOnEventDispather OnPlayPatternVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaVoiceOnEventDispather OnPlayVoice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaVoiceOnEventDispather OnPlayVoiceByName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaVoiceOnEventDispather OnPlaySetVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> IndexSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexSetPlayVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoiceCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSoundHandle PlayHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsResetRandomPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> AisacInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterCostumeDataList EquipCostumeDataList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
public:
    USSCharacterVoiceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlaySetVoice(const FName& InPatternVoice, const int32 InPlayIndex, const bool bInResetRandomPlay, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayCharaVoiceByName(const FString& InCueName, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayCharaVoice(const int32 InVoiceID, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation);
    
    UFUNCTION(BlueprintCallable)
    FKoratSoundHandle PlayCharaPatternVoice(const FName& InPatternVoice, const float InVoiceVolume, const TMap<FString, float>& InAisacInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSoundData(FKoratCharacterDataList InCharacterDataList);
    
    UFUNCTION(BlueprintCallable)
    ECharacterVoiceStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    FKoratCharacterCostumeDataList GetCharacterCostumeDataList();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastOnPlayVoiceByName();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastOnPlayVoice();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastOnPlaySetVoice();
    
    UFUNCTION(BlueprintCallable)
    void CallBroadcastOnPlayPatternVoice();
    
};

