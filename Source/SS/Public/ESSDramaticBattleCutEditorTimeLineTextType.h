#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorTimeLineTextType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorTimeLineTextType : uint8 {
    None,
    TrackNamePose,
    TrackNameFacial,
    TrackNameEffect,
    KeyNameEffectOn,
    KeyNameEffectOff,
    TrackNameCamera,
    TrackNameSubtitle,
    KeyNameSubtitle1,
    KeyNameSubtitle2,
    KeyNameSubtitle3,
    TrackNameBGM,
};

