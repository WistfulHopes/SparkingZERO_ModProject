#pragma once
#include "CoreMinimal.h"
#include "EPratformTypes.h"
#include "IconSetData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FIconSetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPratformTypes UsingPlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> IconSet;
    
    SPRUNTIME_API FIconSetData();
};

