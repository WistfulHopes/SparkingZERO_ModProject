#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratWeatherModeState.h"
#include "EKoratWeatherSection.h"
#include "KoratEmitterDataCompInterface.h"
#include "KoratWeatherManagementActor.generated.h"

class ASSLevelSequenceActor;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AKoratWeatherManagementActor : public AActor, public IKoratEmitterDataCompInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratWeatherModeState ModeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreviewModeNoSequencerPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCelestialSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UseCelestialSphereName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayBackFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString NowPlayingLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EKoratWeatherSection PlaySectionForForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SectionSeekRateForForce;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRootComponent;
    
public:
    AKoratWeatherManagementActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseCelestialSphereName(const FString& InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUseCelestialSphereName() const;
    
    UFUNCTION(BlueprintCallable)
    UStaticMeshComponent* GetLocatorMeshComponent();
    

    // Fix for true pure virtual functions not being implemented
};

