#pragma once
#include "CoreMinimal.h"
#include "MenuMapParameter.generated.h"

USTRUCT(BlueprintType)
struct FMenuMapParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoSwitch;
    
    SS_API FMenuMapParameter();
};

