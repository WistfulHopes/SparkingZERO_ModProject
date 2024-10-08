#pragma once
#include "CoreMinimal.h"
#include "EKoratChangeDirectionOfActionStartType.generated.h"

UENUM(BlueprintType)
enum class EKoratChangeDirectionOfActionStartType : uint8 {
    None,
    MyToOpponent,
    SameDirectionOfOpponent,
    ReverseDirectionOfOpponent,
    FaceToFace,
    SameDirectionToMy,
    ReverseDirectionToMy,
};

