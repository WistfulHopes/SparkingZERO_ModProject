#pragma once
#include "CoreMinimal.h"
#include "EKoratUDS_UDS_VolRT_Mode.generated.h"

UENUM(BlueprintType)
enum class EKoratUDS_UDS_VolRT_Mode : uint8 {
    BackgroundOnlyClouds,
    CloudsRenderOverOpaqueObjects_Performance,
    CloudsRenderOverOpaqueObjects_Quality,
    FullCinematicQuality,
};

