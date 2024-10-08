#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratEventSceneLocatorRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratEventSceneLocatorRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    SS_API FKoratEventSceneLocatorRecord();
};

