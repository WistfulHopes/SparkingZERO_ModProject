#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomComponentPool.generated.h"

class UAtomComponent;

UCLASS(Blueprintable, MinimalAPI)
class UAtomComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAtomComponent*> Pool;
    
public:
    UAtomComponentPool();

};

