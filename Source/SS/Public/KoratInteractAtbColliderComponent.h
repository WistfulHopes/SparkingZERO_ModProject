#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "IKoratFreeTimelineCanPlayChecker.h"
#include "KoratFreeTimelineAtbColliderParam.h"
#include "KoratFreeTimelineHitInformation.h"
#include "KoratFreeTimelineOverlapCompInfo.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractAtbColliderComponent.generated.h"

class AActor;
class UKoratInteractHitInformationBase;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratInteractAtbColliderComponent : public UActorComponent, public IIKoratFreeTimelineCanPlayChecker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepTestDistanceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepTestSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SweepCheckSplitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CurrentCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UShapeComponent> SelectCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineAtbColliderParam EditParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratFreeTimelineOverlapCompInfo> InitializeOverlapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratFreeTimelineHitInformation> OverlapMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> DebugSweepObject;
    
    UKoratInteractAtbColliderComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOneShot();
    
    UFUNCTION(BlueprintCallable)
    FKoratInteractAtbTypeDataList GetParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckHitInformation(UKoratInteractHitInformationBase* InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlay();
    

    // Fix for true pure virtual functions not being implemented
};

