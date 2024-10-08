#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Animation/PoseSnapshot.h"
#include "SSCharacterAfterImageStruct.h"
#include "SSCharacterAfterImageCharacter.generated.h"

class ASSLevelSequenceActor;
class ULevelSequence;
class USSAfterImageDitherComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASSCharacterAfterImageCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSCharacterAfterImageStruct CharacterAfterImageStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lifeTimePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AlphaForSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot PoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerSkeletalMeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USSAfterImageDitherComponent> SSAfterImageDitherComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugAlphaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTickIfViewportsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bDebugValid;
    
    ASSCharacterAfterImageCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacterAfterImage(const float& Alpha);
    
    UFUNCTION(BlueprintCallable)
    void ShowAfterImage();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnParameter(const FSSCharacterAfterImageStruct& tCharacterAfterImageStruct);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCharacterAfterImage();
    
};

