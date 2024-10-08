#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "SSEventSceneCharacterRuntimeDescription.h"
#include "SSEventSceneEventReceiver.h"
#include "SSEventSceneScript.generated.h"

class ASSEventSceneLocator;
class ASSEventVoicePlayer;
class ASSUiFaderHUD;
class UKoratSoundManageComponent;
class USSMenuButton;
class USSMenuTextWithChoiceUi;

UCLASS(Blueprintable, HideDropdown)
class ASSEventSceneScript : public ASSEventSceneEventReceiver {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSoundManageComponent* SoundManageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSEventSceneLocator* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSEventSceneLocator*> Locators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSEventSceneLocator*> LocatorOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSUiFaderHUD* FaderHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuTextWithChoiceUi* MessageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCharacterRuntimeDescription> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSEventSceneCharacterRuntimeDescription> RebindCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSEventVoicePlayer*> VoicePlayers;
    
public:
    ASSEventSceneScript(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnequipCharacterItems(const TArray<int32>& InCharacterIds, const TArray<FKoratCharacterItemDataList>& InItems);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCostumeScratchLevel(const TArray<int32>& InCharacterIds, const int32 InLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSkipButtonHoldProgress(USSMenuButton* InButton, float InProgress);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaySubscene();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubsceneNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSubscene() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void Exit();
    
    UFUNCTION(BlueprintCallable)
    void EquipCharacterItems(const TArray<int32>& InCharacterIds, const TArray<FKoratCharacterItemDataList>& InItems);
    
};

