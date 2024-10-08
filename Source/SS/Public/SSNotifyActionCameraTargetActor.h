#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ENewBattleCameraType.h"
#include "ETypeOfTeleportToPassToBattleCamera.h"
#include "KoratMapAttributeDataList.h"
#include "SSNotifyActionCameraTargetActor.generated.h"

UCLASS(Blueprintable)
class ASSNotifyActionCameraTargetActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENewBattleCameraType BattleCameraType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETypeOfTeleportToPassToBattleCamera TeleportType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeterminedTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EstimatedArrivalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapAttributeDataList MapAttributeDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WatchCount;
    
public:
    ASSNotifyActionCameraTargetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDeterminedTargetPosition(const bool bInDetermined);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleCameraType(const ENewBattleCameraType InBattleCameraType, const ETypeOfTeleportToPassToBattleCamera InTeleportType);
    
    UFUNCTION(BlueprintCallable)
    void KillMySelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeterminedTargetPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHitNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEstimatedArrivalTime() const;
    
};

