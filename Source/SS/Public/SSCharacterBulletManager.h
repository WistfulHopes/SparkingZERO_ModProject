#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BulletControllerManagerMessage.h"
#include "KoratActionDataList.h"
#include "SSCharacterBulletManager.generated.h"

class ASSBulletActor;
class USSGroupExplosionManager;

UCLASS(Blueprintable)
class USSCharacterBulletManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSGroupExplosionManager* GroupExplosionManager;
    
public:
    USSCharacterBulletManager();

    UFUNCTION(BlueprintCallable)
    void ResetCountUpEnemyHitBullet(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void ResetCountMultiHitBullet(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void ResetCountInvalidatedBullet(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void ResetCountFinishedBullet(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMessageByBullet(TSoftObjectPtr<ASSBulletActor> bullet);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveControllerMessage(FBulletControllerManagerMessage Message);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMultiHitBulletCount(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBulletControllerManagerMessage> GetMessages() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetInvalidatedBulletCount(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFinishedBulletCount(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFieldExistinRunBulletsNum(FKoratActionDataList Action);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFieldExistinBulletsNum(FKoratActionDataList Action);
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyHitBulletCount(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<ASSBulletActor>> GetActiveBullets() const;
    
    UFUNCTION(BlueprintCallable)
    void FinsishByDamage();
    
    UFUNCTION(BlueprintCallable)
    void CountUpMultiHitBullet(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void CountUpInvalidatedBullet(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void CountUpFinishedBullet(FKoratActionDataList InAction);
    
    UFUNCTION(BlueprintCallable)
    void CountUpEnemyHitBullet(FKoratActionDataList InAction);
    
};

