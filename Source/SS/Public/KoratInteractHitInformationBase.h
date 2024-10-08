#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKoratFreeTimelineHitInfoState.h"
#include "KoratActionDataList.h"
#include "KoratFreeTimelineHitInformation.h"
#include "KoratInteractHitInfoState.h"
#include "KoratInteractHitInformationBase.generated.h"

UCLASS(Blueprintable)
class UKoratInteractHitInformationBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratFreeTimelineHitInformation> HitInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratFreeTimelineHitInformation> PrevHitInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FKoratInteractHitInfoState> HitInfoStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HitNearObjectUniqueID;
    
    UKoratInteractHitInformationBase();

    UFUNCTION(BlueprintCallable)
    void SetUseState(const int32 InUniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SetState(const int32 InUniqueId, const EKoratFreeTimelineHitInfoState InNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestState(const int32 InUniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyState(const int32 InUniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SetContinueState(const int32 InUniqueId, const int32 InContnueId);
    
    UFUNCTION(BlueprintCallable)
    void SetAction(const TArray<FKoratActionDataList>& InActionList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUniqueIdListStateFiltered(const EKoratFreeTimelineHitInfoState InFillterState, TArray<int32>& OutUniqueIdArray) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKoratFreeTimelineHitInfoState GetState(const int32 InUniqueId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitNearObjectId() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHitInfo(const int32 InUniqueId, FKoratFreeTimelineHitInformation& OutHitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllUniqueIdList(TArray<int32>& OutUniqueIdArray) const;
    
};

