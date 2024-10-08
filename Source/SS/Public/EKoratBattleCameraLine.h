#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleCameraLine.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleCameraLine : uint8 {
    KoratBattleCameraBlendLineStraight,
    KoratBattleCameraBlendLineArcR,
    KoratBattleCameraBlendLineArcL,
    KoratBattleCameraBlendLineCurve,
    KoratBattleCameraBlendLineCurveMy,
    KoratBattleCameraBlendLineCurveRev,
    KoratBattleCameraBlendLineCurveMyRev,
    KoratBattleCameraBlendLineMax,
};

