#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EKoratCharacterUIActionFootIKMode.h"
#include "KoratCharacterUIActionManagerCommandRequest.h"
#include "KoratCharacterUIActionRequestBlendOptionInfo.h"
#include "KoratCharacterUIActionRequestCustomTimeDilationInfo.h"
#include "KoratCharacterUIActionRequestEndFrameInfo.h"
#include "KoratCharacterUIActionRequestFootIKModeInfo.h"
#include "KoratCharacterUIActionRequestGroupIdInfo.h"
#include "KoratCharacterUIActionRequestMovementModeInfo.h"
#include "KoratCharacterUIActionRequestPlayInfo.h"
#include "KoratCharacterUIActionRequestSectionInfo.h"
#include "KoratCharacterUIActionRequestStartFrameInfo.h"
#include "KoratCharacterUIActionRequestStopInfo.h"
#include "KoratGroupIdDataList.h"
#include "KoratUIActionBlendOption.h"
#include "KoratCharacterUIActionManager.generated.h"

class ASSCharacter;
class ASSLevelSequenceActor;
class UAnimMontage;
class UKoratCharacterUIActionDebugDraw;
class UKoratMLSDataAsset;

UCLASS(Blueprintable)
class AKoratCharacterUIActionManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestPlayInfo> UIActionPlayRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestSectionInfo> UIActionSectionRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestStopInfo> UIActionStopRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestFootIKModeInfo> UIActionFootIKModeRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestMovementModeInfo> UIActionMovementModeRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestGroupIdInfo> UIActionGroupIdRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestStartFrameInfo> UIActionStartFrameRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestEndFrameInfo> UIActionEndFrameRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestCustomTimeDilationInfo> UIActionCustomTimeDilationRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionRequestBlendOptionInfo> UIActionBlendOptionRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterUIActionManagerCommandRequest> CommandRequests;
    
public:
    AKoratCharacterUIActionManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopUiAction(ASSCharacter* InCharacter, float InBlendOutTime, bool bInImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionStartFrame(ASSCharacter* InCharacter, int32 InUIActionStartFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionSection(ASSCharacter* InCharacter, FName InUIActionSectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionMovementMode(ASSCharacter* InCharacter, TEnumAsByte<EMovementMode> InUIActionMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionGroupId(ASSCharacter* InCharacter, FKoratGroupIdDataList InUIActionGroupId);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionFootIKModeAndMovementMode(ASSCharacter* InCharacter, EKoratCharacterUIActionFootIKMode InUIActionFootIKMode, TEnumAsByte<EMovementMode> InUIActionMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionFootIKMode(ASSCharacter* InCharacter, EKoratCharacterUIActionFootIKMode InUIActionFootIKMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionEndFrame(ASSCharacter* InCharacter, int32 InUIActionEndFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionCustomTimeDilation(ASSCharacter* InCharacter, float InUIActionCustomTimeDilation);
    
    UFUNCTION(BlueprintCallable)
    void SetUIActionBlendOption(ASSCharacter* InCharacter, FKoratUIActionBlendOption InUIActionBlendOption);
    
    UFUNCTION(BlueprintCallable)
    void SetRunTickBeforeUIActionManager(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayUIActionMLS(ASSCharacter* InCharacter, UKoratMLSDataAsset* InUIActionMLS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActionPlayingAny(const ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIActionPlaying(const ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningUIActionGroupId(const ASSCharacter* InCharacter, const FKoratGroupIdDataList& InGroupId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledFootIK(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionRemainingTimeAtSection(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionPlayRatioAtSection(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetUIActionPlayingMontage(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASSLevelSequenceActor* GetUIActionPlayingLevelSequenceActor(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUIActionNextSection(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UKoratMLSDataAsset* GetUIActionMLSLast(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratGroupIdDataList GetUIActionGroupId(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUIActionCurrentSection(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIActionCurrentPosition(ASSCharacter* InCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    UKoratCharacterUIActionDebugDraw* GetDebugDraw();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckUIActionMLSMontageLevelSequence(const UKoratMLSDataAsset* InUIActionMLS);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckUIActionMLS(const ASSCharacter* InCharacter, const UKoratMLSDataAsset* InUseMLS, const UKoratMLSDataAsset* InKeyMLS);
    
};

