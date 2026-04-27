#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratSoundHandle.h"
#include "SSAtomComponentManager.generated.h"

class AActor;
class UAtomComponent;

UCLASS(Blueprintable)
class USSAtomComponentManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratSoundHandle, TWeakObjectPtr<UAtomComponent>> AtomCompList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
public:
    USSAtomComponentManager();

};

