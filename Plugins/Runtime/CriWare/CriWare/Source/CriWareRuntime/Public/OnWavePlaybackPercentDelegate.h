#pragma once
#include "CoreMinimal.h"
#include "OnWavePlaybackPercentDelegate.generated.h"

class USoundAtomCue;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWavePlaybackPercent, const USoundAtomCue*, PlayingAtomCue, int32, WaveId, const float, PlaybackPercent);

