#pragma once
#include "CoreMinimal.h"
#include "BulletDirectionIndexData.generated.h"

USTRUCT(BlueprintType)
struct FBulletDirectionIndexData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DirectionIndexArray;
    
    SS_API FBulletDirectionIndexData();
};

