#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKoratNotEnoughPoolObjectsType.h"
#include "Templates/SubclassOf.h"
#include "KoratObjectPool.generated.h"

class AActor;

UCLASS(Blueprintable)
class UKoratObjectPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ManagedActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratNotEnoughPoolObjectsType NotEnoughType;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> UsedObjectList;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> UnUsedObjectList;
    
public:
    UKoratObjectPool();

};

