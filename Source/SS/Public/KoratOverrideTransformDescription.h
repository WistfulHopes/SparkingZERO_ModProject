#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratOverrideTransformDescription.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FKoratOverrideTransformDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OverrideTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OverrideTransformActor;
    
    SS_API FKoratOverrideTransformDescription();
};

