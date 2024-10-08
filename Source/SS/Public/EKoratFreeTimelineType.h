#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineType.generated.h"

UENUM(BlueprintType)
enum class EKoratFreeTimelineType : uint8 {
    None,
    BlastForte1,
    BlastForte2,
    BlastSkill1,
    BlastSkill2,
    Ultimate,
    AurLv1,
    Dds,
    Zds,
    Cge,
    ActTackle,
    ActCannon,
    ActBomb,
    ActWave,
    ActDash,
    ActBlow,
    AnnAirWall,
    AnnGuardBreak,
    AnnGuardBreakDisable,
    AnnEnergyMax,
    AnnCancel,
    AnnHiSpeedMoveIn,
    AnnHiSpeedMoveOt,
    AnnMultiCounter,
    ScrConcentrationLine,
    ScrAirPressure,
    ScrDebris,
    ScrVistaMask,
    ScrVignette,
    Muzzule,
    SmashMuzzule,
    AnnVectorFieldsS,
    AnnVectorFieldsM,
    AnnVectorFieldsL,
    ActImpactWind,
    ActStepWind,
    ActShorStepWind,
    ActLongStepWind,
    AurLv2,
    AurLv3,
    AurLv4,
    ShakeVWeak,
    ShakeWeak,
    ShakeMedium,
    ShakeStrong,
    ShakeVStrong,
    ActJustSmash,
    ActJustTiming,
    FormChange,
    FormChangeRemove,
    CgeSparking,
    ZdsDds,
};

