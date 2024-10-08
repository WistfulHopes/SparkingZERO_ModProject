#pragma once
#include "CoreMinimal.h"
#include "AisacControlInterpolationSettings.h"
#include "BusSendInterpolationSettings.h"
#include "SnapshotSwitchSettings.h"
#include "AtomAudioVolumeParameters.generated.h"

USTRUCT(BlueprintType)
struct FAtomAudioVolumeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSnapshotSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBusSendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAisacControlSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceForEntranceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchIntepolationInsideForBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchIntepolationInsideForAisac;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSnapshotSwitchSettings> SnapshotSwitchSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBusSendInterpolationSettings> BusSendInterpolateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAisacControlInterpolationSettings> AisacControlInterpolateSettings;
    
    CRIWARERUNTIME_API FAtomAudioVolumeParameters();
};

