#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomAudioVolumeParameters.h"
#include "AtomAudioVolumeSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAtomAudioVolumeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomAudioVolumeParameters AtomAudioVolumeParameters;
    
    UAtomAudioVolumeSettings();

};

