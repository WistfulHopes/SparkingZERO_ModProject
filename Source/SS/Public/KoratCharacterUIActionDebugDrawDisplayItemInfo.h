#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratCharacterUIActionDebugDrawDisplayItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionDebugDrawDisplayItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DrawOffsetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    SS_API FKoratCharacterUIActionDebugDrawDisplayItemInfo();
};

