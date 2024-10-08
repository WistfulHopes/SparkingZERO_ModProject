#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "Chaos/ChaosEngineInterface.h"
#include "IKoratFreeTimelineCanPlayChecker.h"
#include "KoratFreeTimelineHitInformation.h"
#include "KoratFreeTimelineLineTraceParam.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractAtbLineTraceComponent.generated.h"

class AActor;
class UKoratInteractHitInformationBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratInteractAtbLineTraceComponent : public UActorComponent, public IIKoratFreeTimelineCanPlayChecker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineLineTraceParam EditParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TransformActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> IgnoreSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bDisableSpaceAreaOnlyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DebugLineTraceStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DebugLineTraceEndPos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> LastSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratFreeTimelineHitInformation> LineTraceHitList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector DebugFowardDirVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat DebugShowRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DebugUsingUniqueID;
    
public:
    UKoratInteractAtbLineTraceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefaultValue(const FKoratInteractAtbTypeDataList& InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOneShot();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EPhysicalSurface> GetPhysicalSurface(const FHitResult& InHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratInteractAtbTypeDataList GetParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLineTraceStartPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLineTraceEndPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckHitInformation(UKoratInteractHitInformationBase* IneParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlay();
    

    // Fix for true pure virtual functions not being implemented
};

