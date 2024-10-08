#pragma once
#include "CoreMinimal.h"
#include "ECameraType.generated.h"

UENUM(BlueprintType)
enum class ECameraType : uint8 {
    CameraTypeNone,
    CameraTypeDirectorMainCamera,
    CameraTypeManualCamera,
    CameraTypeCutCamera,
    CameraTypeMax,
};

