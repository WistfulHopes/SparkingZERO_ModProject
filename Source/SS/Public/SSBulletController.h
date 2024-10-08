#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBulletControlCommand.h"
#include "KoratActionDataList.h"
#include "KoratBulletKeyDataList.h"
#include "KoratEffectColorDataDetail.h"
#include "KoratEffectMultipleColorInterface.h"
#include "KoratExecuteActorInterface.h"
#include "SSBulletController.generated.h"

class ASSBulletCommandManager;
class UKoratEffectMultipleColorComponent;
class ULevelSequencePlayer;
class UMovieSceneSequence;

UCLASS(Blueprintable, MinimalAPI)
class ASSBulletController : public AActor, public IKoratEffectMultipleColorInterface, public IKoratExecuteActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratActionDataList OuterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratBulletKeyDataList BulletKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SpawnerSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSpawnedLevelSequencePlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBulletCommandManager* BulletCommandManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* ExecuteActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EBulletControlCommand CommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString FireSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 SupporterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool ShotTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bDirectControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectColorDataDetail EffectMultipleColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratEffectMultipleColorComponent* EffectMultipleColorComponent;
    
    ASSBulletController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    bool SetSourceColor(const FKoratEffectColorDataDetail& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetShotTrigger(bool bShot);
    
    UFUNCTION(BlueprintCallable)
    void SetFireSocketName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectControl(bool bControl);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandType(EBulletControlCommand Num);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandName(EBulletControlCommand Num);
    
    UFUNCTION(BlueprintCallable)
    FKoratEffectColorDataDetail GetSourceColor();
    
private:
    UFUNCTION(BlueprintCallable)
    ASSBulletCommandManager* GetBulletCommandManager();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecCommand(EBulletControlCommand Num);
    

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

