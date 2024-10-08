#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EKoratActionAttackType.h"
#include "EKoratCombativesCollisionType.h"
#include "EKoratOffsetType.h"
#include "KoratActionDataList.h"
#include "KoratAdditionalDamageInfo.h"
#include "KoratAttackCollisionParameter.h"
#include "KoratGaveDamageParameter.h"
#include "KoratPoolableActorInterface.h"
#include "KoratReceivedDamageParameter.h"
#include "KoratAttackPoolableActor.generated.h"

class ASSCharacter;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AKoratAttackPoolableActor : public AActor, public IKoratPoolableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* SourceObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SourceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratReceivedDamageParameter ReceivedDamageParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bReflectedHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratActionDataList CombativesID;
    
    AKoratAttackPoolableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupReceivedDamageParameter(ASSCharacter* InCharacter, const FKoratAdditionalDamageInfo& InAdditionalDamageInfo, EKoratActionAttackType InAttackType);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackType(EKoratActionAttackType InAttackType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAttackCollision(UPrimitiveComponent* InCollision);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshCollision(const FKoratAttackCollisionParameter& InCollisionParameter, FKoratActionDataList InAction, const FKoratAdditionalDamageInfo& InAdditionalDamageInfo, EKoratActionAttackType InAttackType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOptimizeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecSetHitBoneLocation(ASSCharacter* OverlapCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecOccurOffset(ASSCharacter* InAttacker, ASSCharacter* InOpponentOffsetCharacter, const FKoratActionDataList& InAction, EKoratOffsetType InOffsetType, const FTransform& InOffsetLocation, const FKoratReceivedDamageParameter& InDamageParam);
    
    UFUNCTION(BlueprintCallable)
    void ExecCollision(const FVector& InStart, const FVector& InEnd, const FQuat& InRot, EKoratCombativesCollisionType InShape, float Radius, float CapsuleHalfHeight, const FVector& BoxHalfSize, ASSCharacter* InAttacker, const FKoratActionDataList& InAction, const FVector& InClosestPointOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecAddHitAttackCollisionData(const FKoratGaveDamageParameter& InDamageParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void DisposeCollision();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAndSetGroupHitFlag(FName InUniqName);
    
    UFUNCTION(BlueprintCallable)
    bool CalculatCrossPointOnPhysicsAsset(AActor* InOverlapActor, FTransform InTransform, FTransform& OutTransform, FName& OutBoneName);
    

    // Fix for true pure virtual functions not being implemented
};

