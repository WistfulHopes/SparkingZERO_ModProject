#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IKoratFreeTimelineCanPlayChecker.h"
#include "KoratFreeTimelineAtbSpaceParam.h"
#include "KoratFreeTimelineHitInformation.h"
#include "KoratInteractAtbSpaceComponent.generated.h"

class UKoratInteractHitInformationBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratInteractAtbSpaceComponent : public UActorComponent, public IIKoratFreeTimelineCanPlayChecker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineAtbSpaceParam EditParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HitNearObjectUniqueID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratFreeTimelineHitInformation> SpaceAreaHitMap;
    
public:
    UKoratInteractAtbSpaceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOneShot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckHitInformation(UKoratInteractHitInformationBase* InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlay();
    

    // Fix for true pure virtual functions not being implemented
};

