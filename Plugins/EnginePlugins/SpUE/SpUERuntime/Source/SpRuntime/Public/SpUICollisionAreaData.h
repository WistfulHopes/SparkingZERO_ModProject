#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpUICollisionAreaData.generated.h"

USTRUCT(BlueprintType)
struct FSpUICollisionAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeftTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RightTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeftBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RightBottom;
    
    SPRUNTIME_API FSpUICollisionAreaData();
};

