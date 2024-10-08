#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbTypeDataList.h"
#include "SSEffectPedestalActorBase.h"
#include "SSEffectPedestalLevelSequencePlayOrder.h"
#include "SSEffectPedestalActorLevelSequence.generated.h"

class AActor;
class ASSCharacter;

UCLASS(Blueprintable)
class ASSEffectPedestalActorLevelSequence : public ASSEffectPedestalActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEffectPedestalLevelSequencePlayOrder> SettingPlayOrders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<ASSCharacter>> SettingRebindCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingInteractTriggerAlNumId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList SettingInteractAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OverrideTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, ASSCharacter*> RebindCharacters;
    
public:
    ASSEffectPedestalActorLevelSequence(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ApplyPlaySettings();
    
};

