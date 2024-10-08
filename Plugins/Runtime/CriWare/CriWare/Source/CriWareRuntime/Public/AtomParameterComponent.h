#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtomParameterComponent.generated.h"

class UAtom3dRegion;
class UAtomSoundObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* SoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtom3dRegion* Region;
    
    UAtomParameterComponent(const FObjectInitializer& ObjectInitializer);

};

