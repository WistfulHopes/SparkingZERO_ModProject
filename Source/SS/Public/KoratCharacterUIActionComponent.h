#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EKoratCharacterUIActionFootIKMode.h"
#include "KoratGroupIdDataList.h"
#include "KoratUIActionBlendOption.h"
#include "KoratUIActionDataList.h"
#include "KoratCharacterUIActionComponent.generated.h"

class ASSLevelSequenceActor;
class UAnimMontage;
class UKoratMLSDataAsset;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharacterUIActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* UIActionMLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UIActionSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterUIActionFootIKMode UIActionFootIKMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> UIActionMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UIActionGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIActionStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIActionStartFrameSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIActionEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIActionEndFrameSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratUIActionBlendOption UIActionBlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIActionEnableUnregisteredMLS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UKoratMLSDataAsset*, UKoratMLSDataAsset*> UIActionMLSMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* UIActionMLSRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UIActionSectionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUIActionStopRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIActionStopBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* UIActionMLSLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterUIActionFootIKMode UIActionFootIKModeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterUIActionFootIKMode UIActionFootIKModeNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> UIActionMovementModeRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratGroupIdDataList UIActionGroupIdRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratGroupIdDataList UIActionRunningGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIActionStartFrameRequestFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIActionStartFrameRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIActionEndFrameRequestFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIActionEndFrameRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIActionCustomTimeDilationRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIActionBlendOptionRequestFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratUIActionBlendOption UIActionBlendOptionRequest;
    
public:
    UKoratCharacterUIActionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUIActionStartFrame(int32 InStartFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionSection(const FString& InSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionMovementMode(TEnumAsByte<EMovementMode> InUIActionMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionMLS(UKoratMLSDataAsset* InUIActionMLS);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionGroupId(const FString& InUIActionGroupId);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionFootIKMode(EKoratCharacterUIActionFootIKMode InUIActionFootIKMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionEndFrame(int32 InEndFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionEnableUnregisteredMLS(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionBlendOption(const FKoratUIActionBlendOption& InUIActionBlendOption);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionStartFrame(int32 InUIActionStartFrame);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionSection(FName InUIActionSectionName);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionMovementMode(TEnumAsByte<EMovementMode> InUIActionMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionGroupId(FKoratGroupIdDataList InUIActionGroupId);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionFootIKMode(EKoratCharacterUIActionFootIKMode InUIActionFootIKMode);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionEndFrame(int32 InUIActionEndFrame);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionCustomTimeDilation(float InUIActionCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void RequestSetUIActionBlendOption(FKoratUIActionBlendOption InUIActionBlendOption);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayUIActionMLS(UKoratMLSDataAsset* InUIActionMLS);
    
    UFUNCTION(BlueprintCallable)
    void PlayUIAction(const FKoratUIActionDataList InUIAction);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionStartFrame(int32 InUIActionStartFrame);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionSection(FName InUIActionSectionName);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionMovementMode(TEnumAsByte<EMovementMode> InUIActionMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionMLS(UKoratMLSDataAsset* InUIActionMLS);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionGroupId(FKoratGroupIdDataList InUIActionGroupId);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionFootIKMode(EKoratCharacterUIActionFootIKMode InUIActionFootIKMode);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionEndFrame(int32 InUIActionEndFrame);
    
    UFUNCTION(BlueprintCallable)
    void NotifySetUIActionBlendOption(FKoratUIActionBlendOption InUIActionBlendOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActionPlayingAny() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningUIActionGroupId(const FKoratGroupIdDataList& InGroupId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionRemainingTimeAtSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionPlayRatioAtSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetUIActionPlayingMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSLevelSequenceActor* GetUIActionPlayingLevelSequenceActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUIActionNextSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratGroupIdDataList GetUIActionGroupId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratCharacterUIActionFootIKMode GetUIActionFootIKMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUIActionCurrentSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionCurrentPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratUIActionBlendOption GetUIActionBlendOption() const;
    
};

