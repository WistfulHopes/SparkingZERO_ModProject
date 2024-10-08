#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "KoratAttackCollisionPool.generated.h"

class AActor;
class AKoratAttackPoolableActor;
class UKoratObjectPoolSubSystem;

UCLASS(Blueprintable)
class UKoratAttackCollisionPool : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratObjectPoolSubSystem* ObjectPoolSubSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AttackPoolableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AKoratAttackPoolableActor*> AttackingCollisionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UniqueGroupIDSeed;
    
public:
    UKoratAttackCollisionPool();

};

