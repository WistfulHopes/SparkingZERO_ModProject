#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratPatternBGMName.h"
#include "EKoratSequenceSoundBGMType.h"
#include "EKoratSequenceSoundCameraType.h"
#include "EKoratSequenceSoundControlType.h"
#include "EKoratSequenceSoundSheetType.h"
#include "ESSSoundGroupType.h"
#include "KoratActorIdentityInterface.h"
#include "KoratBGMDataList.h"
#include "KoratChainPlaySoundDataList.h"
#include "KoratExecuteActorInterface.h"
#include "KoratGroupIdDataList.h"
#include "KoratPatternVoiceDataList.h"
#include "KoratSequenceSoundPlayer.generated.h"

class ASSCharacter;
class UKoratSoundManageComponent;
class UMovieSceneSequence;

UCLASS(Blueprintable)
class SS_API AKoratSequenceSoundPlayer : public AActor, public IKoratActorIdentityInterface, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundCueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPatternVoiceDataList PatternName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSequenceSoundSheetType SheetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSSoundGroupType SoundGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopSoundEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSlowPlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableChainPlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratChainPlaySoundDataList ChainPlaySoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteOnFormChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* LipsSyncroCharacter0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* LipsSyncroCharacter1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* LipsSyncroCharacter2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ASSCharacter* LipsSyncroCharacter3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlay2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSequenceSoundCameraType CameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoveToDifferentPositionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SetPlayVoiceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayVoiceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsResetRandomDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratPatternBGMName PatternBGMDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratSequenceSoundBGMType BGMType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCrossFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ManagedId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratGroupIdDataList GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> FormIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ChargeLvArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratSequenceSoundControlType CtrlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachLocationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TerrainSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTerrainRay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSoundManageComponent* SoundManageComponent;
    
public:
    AKoratSequenceSoundPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExecuteActor(ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnBattleStart();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void SetOwnerSequenceInterface(UMovieSceneSequence* InSequence) override PURE_VIRTUAL(SetOwnerSequenceInterface,);
    
    UFUNCTION()
    void SetExecuteActorInterface(AActor* InExecuteActor) override PURE_VIRTUAL(SetExecuteActorInterface,);
    
    UFUNCTION()
    void SetEditorExecuteActorInterface(AActor* InEditorExecuteActor) override PURE_VIRTUAL(SetEditorExecuteActorInterface,);
    
    UFUNCTION()
    UMovieSceneSequence* GetOnewrSequenceInterface() const override PURE_VIRTUAL(GetOnewrSequenceInterface, return NULL;);
    
    UFUNCTION()
    AActor* GetExecuteActorInterface() const override PURE_VIRTUAL(GetExecuteActorInterface, return NULL;);
    
};

