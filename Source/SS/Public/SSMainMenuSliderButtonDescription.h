#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuSliderButtonDescription.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSSMainMenuSliderButtonDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* IconResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* NameResource;
    
    SS_API FSSMainMenuSliderButtonDescription();
};

