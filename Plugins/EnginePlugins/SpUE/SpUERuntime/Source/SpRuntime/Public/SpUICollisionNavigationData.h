#pragma once
#include "CoreMinimal.h"
#include "SpUICollisionNavigationData.generated.h"

USTRUCT(BlueprintType)
struct FSpUICollisionNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Down;
    
    SPRUNTIME_API FSpUICollisionNavigationData();
};

