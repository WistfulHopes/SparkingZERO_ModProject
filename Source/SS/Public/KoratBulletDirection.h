#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratBulletDirection.generated.h"

USTRUCT(BlueprintType)
struct FKoratBulletDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> RotatorArray;
    
    SS_API FKoratBulletDirection();
};

