#pragma once
#include "CoreMinimal.h"
#include "EKoratUDS_UDS_FeatureToggle.generated.h"

UENUM(BlueprintType)
enum class EKoratUDS_UDS_FeatureToggle : uint8 {
    UseBuiltInComponent,
    UseCustomActor,
    DisableCompletely,
};

