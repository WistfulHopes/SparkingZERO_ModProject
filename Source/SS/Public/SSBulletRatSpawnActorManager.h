#pragma once
#include "CoreMinimal.h"
#include "EKoratBulletRatType.h"
#include "KoratPoolableActorBase.h"
#include "SSBulletRatSpawnActorManagerParameter.h"
#include "SSBulletRatSpawnActorManager.generated.h"

class ASSBulletBeamView;
class ASSBulletRatSpawnActor;

UCLASS(Blueprintable)
class ASSBulletRatSpawnActorManager : public AKoratPoolableActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EKoratBulletRatType, FSSBulletRatSpawnActorManagerParameter> SpawnParameterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSBulletBeamView> BulletBeamView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EKoratBulletRatType, bool> HitPrevLineTrace;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EKoratBulletRatType, TWeakObjectPtr<ASSBulletRatSpawnActor>> BulletRatSpawnActorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBorrowingPool;
    
public:
    ASSBulletRatSpawnActorManager(const FObjectInitializer& ObjectInitializer);

};

