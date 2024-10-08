#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EKoratCharacterActionFinishReason.h"
#include "KoratActionDataList.h"
#include "SSCharacterActionManagerForLevelSequenceSpawnData.h"
#include "SSCharacterActionManagerForLevelSequence.generated.h"

class ASSLevelSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSCharacterActionManagerForLevelSequence : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestHideCurrentActionSequence;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FSSCharacterActionManagerForLevelSequenceSpawnData> SpawnDataMap;
    
public:
    USSCharacterActionManagerForLevelSequence(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNextSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionNameToChange, const FName InNextSectionName);
    
    UFUNCTION(BlueprintCallable)
    void JumpSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSLevelSequenceActor* GetCharacterActionSequenceActor(FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSpawnAndDestroyRequestCharacterActionSequenceActor();
    
    UFUNCTION(BlueprintCallable)
    void DestroyRequestCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason);
    
    UFUNCTION(BlueprintCallable)
    void DestroyRequestActionSequenceActorAll();
    
    UFUNCTION(BlueprintCallable)
    void DestroyCharacterActionSequenceActor(FKoratActionDataList InAction, EKoratCharacterActionFinishReason InActionFinishReason);
    
    UFUNCTION(BlueprintCallable)
    void ChangedSectionCharacterActionSequenceActor(FKoratActionDataList InAction, const FName InSectionName, const float InPlayRatio);
    
    UFUNCTION(BlueprintCallable)
    void AfterglowLevelActionSequenceActorEndConfirm();
    
};

