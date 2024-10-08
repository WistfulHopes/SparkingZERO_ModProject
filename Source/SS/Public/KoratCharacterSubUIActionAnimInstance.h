#pragma once
#include "CoreMinimal.h"
#include "KoratGroupIdDataList.h"
#include "KoratUIActionBlendOption.h"
#include "SSAnimInstance.h"
#include "SSMontageLevelSequence.h"
#include "KoratCharacterSubUIActionAnimInstance.generated.h"

class ASSLevelSequenceActor;
class UAnimMontage;
class UObject;

UCLASS(Blueprintable, NonTransient)
class UKoratCharacterSubUIActionAnimInstance : public USSAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PlayingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* PlayingLevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTimeBattleActionToUIAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTimeUIActionToBattleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratGroupIdDataList RunningGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OriginalMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CallingPlayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDuplicatedModifySectionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChangeCustomTimeDilation;
    
public:
    UKoratCharacterSubUIActionAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopUiAction(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionGroupId(FKoratGroupIdDataList InGroupId);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionCustomTimeDilation(float InCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void PlayUIActionMontageLevelSequence(const FSSMontageLevelSequence& InMontageLevelSequence, const FName InSectionName, int32 InStartFrame, int32 InEndFrame, const FKoratUIActionBlendOption& InBlendOption, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    void JumpUIActionSection(const FName InSectionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActionPlayingAny() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeCustomTimeDilation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionRemainingTimeAtSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionPlayRatioAtSection() const;
    
    UFUNCTION(BlueprintCallable)
    static float GetUiactionPlayOneFrameFps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUIActionNextSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUIActionCurrentSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionCurrentPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionBlendWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionBlendTimeUIActionToBattleAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionBlendTimeBattleActionToUIAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetPlayingMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSLevelSequenceActor* GetPlayingLevelSequenceActor() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayRange(int32 InStartFrame, int32 InEndFrame);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateFrameToSecond(int32 InFrame);
    
};

