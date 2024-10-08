#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSCharacterAfterImageStruct.h"
#include "SSCharacterAfterImageMesh.generated.h"

class ASSLevelSequenceActor;
class ULevelSequence;
class UMaterialInstanceDynamic;
class UPoseableMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASSCharacterAfterImageMesh : public AActor {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialAfterImageActiveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialAfterImageValueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OwnerSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamicArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AlphaForSequencer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSLevelSequenceActor> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
public:
    ASSCharacterAfterImageMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCharacterAfterImage(const float& Alpha);
    
    UFUNCTION(BlueprintCallable)
    void ShowAfterImage();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnParameter(const FSSCharacterAfterImageStruct& tCharacterAfterImageStruct);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCharacterAfterImage();
    
};

