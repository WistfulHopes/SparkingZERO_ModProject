#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratConditionPlayVoiceDataList.h"
#include "SSConditionalPlayVoiceManager.generated.h"

class AKoratSequenceSoundPlayer;
class ASSCharacter;

UCLASS(Blueprintable)
class SS_API USSConditionalPlayVoiceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHPGaugeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratConditionPlayVoiceDataList> IsPlayedVoiceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKoratSequenceSoundPlayer* SoundPlayer;
    
public:
    USSConditionalPlayVoiceManager();

    UFUNCTION(BlueprintCallable)
    void Update(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

