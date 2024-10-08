#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSequenceRuntimeDescriptionDE.h"
#include "SSEventSceneCharacterRuntimeDescriptionDE.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneCharacterRuntimeDescriptionDE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE ActionLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE HiddenAuraLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE ActionEffectLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE SlowTriggerParticleEffectLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSEventSceneSequenceRuntimeDescriptionDE FacialLevelSequence;
    
    SS_API FSSEventSceneCharacterRuntimeDescriptionDE();
};

