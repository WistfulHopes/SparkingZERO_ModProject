#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "EKoratAnimType.h"
#include "KoratActionDataList.h"
#include "KoratAddtiveReactionParameter.h"
#include "KoratReplaceAnimationDataList.h"
#include "KoratRequestAnimData.h"
#include "SSAnimInstance.h"
#include "KoratCharacterSubActionStateAnimInstance.generated.h"

class UAnimMontage;
class UKoratCharacterSubActionState;
class UKoratCharacterSubAddtiveReactionAnimInstance;
class UObject;

UCLASS(Blueprintable, NonTransient)
class UKoratCharacterSubActionStateAnimInstance : public USSAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactionMultipleSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestReactionMultipleSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugPrintActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeOfDebugDraw;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubActionState* SubActionMovingAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubActionState* SubActionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubActionState* SubActionReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubActionState* SubActionAddtiveReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratCharacterSubAddtiveReactionAnimInstance* AddtiveReactionAnimInstance;
    
public:
    UKoratCharacterSubActionStateAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopMontagesByGroupName(FName InGroupName, FAlphaBlend InAlphaBlend);
    
    UFUNCTION(BlueprintCallable)
    void StopMontageLevelSequence(EKoratAnimType InAnimType, FAlphaBlend InBlend, bool bIsDamageCancel);
    
    UFUNCTION(BlueprintCallable)
    void StopActionByChangeCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetSetSectionName(const EKoratAnimType InAnimType, const FString& InSetSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSectionName(const EKoratAnimType InAnimType, const FString& InNextSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSection(const EKoratAnimType InAnimType, const FName InName);
    
    UFUNCTION(BlueprintCallable)
    bool SetMontageSetNextSection(const EKoratAnimType InAnimType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsContinued(const EKoratAnimType InAnimType, const bool bInContinued);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDisableDebugString(bool InIsDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString RecieveCrateDebugActionString();
    
public:
    UFUNCTION(BlueprintCallable)
    float PlayMontageLevelSequence(const FKoratRequestAnimData& InRequestAnimData);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterActionMontage(EKoratAnimType InAnimType, USSAnimInstance* InAnimInstance, UAnimMontage* InMontage, FName InJumpSectionName);
    
    UFUNCTION(BlueprintCallable)
    void PlayAddtiveReaction(const FKoratAddtiveReactionParameter& InAddtiveReactionParameter);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MontageIsPlaying(const EKoratAnimType InAnimType, const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float MontageGetPosition(const EKoratAnimType InAnimType, const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName MontageGetCurrentSection(const EKoratAnimType InAnimType, const UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName MontageFindCurrentSection(const UAnimMontage* Montage) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpToSectionsEnd(FName SectionName, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void JumpToSection(FName SectionName, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void JumpSection(const EKoratAnimType InAnimType, const FName InName);
    
    UFUNCTION(BlueprintCallable)
    bool JumpMetaDataPosition(EKoratAnimType InAnimType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMontageByObject(const EKoratAnimType InAnimType, const UObject* InObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMontage(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLastSectionFinished(const EKoratAnimType InAnimType, int32 InOffsetFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableSubActionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratReplaceAnimationDataList GetReplaceAnimationDataList(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratReplaceAnimationDataList GetPreReplaceAnimationDataList(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRatioAtSection(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratAnimType GetPlayingAnimType(const FKoratActionDataList InAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetOriginalMontage(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextSection(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetMontage(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLevelSequenceCurrentTime(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLevelSequenceCurrentSection(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLevelSequenceCurrentName(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsContinued(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGroupName(const EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentSection(EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPosition(EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetCurrentMontage(EKoratAnimType InAnimType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAnimTypeObject(EKoratAnimType& OutAnimType, const UObject* InObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    FString CreateDebugActionString();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangedSection(const EKoratAnimType InAnimType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddRunningActionString(UPARAM(Ref) FString& InOutString);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddDebugActionString(const EKoratAnimType InAnimType);
    
};

