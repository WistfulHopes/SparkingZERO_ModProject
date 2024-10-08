#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "KoratObjectPoolSubSystem.generated.h"

class AActor;
class UKoratObjectPool;

UCLASS(Blueprintable)
class UKoratObjectPoolSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, UKoratObjectPool*> ActorPools;
    
public:
    UKoratObjectPoolSubSystem();

};

