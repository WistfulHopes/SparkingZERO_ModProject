#pragma once
#include "CoreMinimal.h"
#include "SSLocomotionSection.generated.h"

USTRUCT(BlueprintType)
struct FSSLocomotionSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEndSection;
    
    SS_API FSSLocomotionSection();
};

