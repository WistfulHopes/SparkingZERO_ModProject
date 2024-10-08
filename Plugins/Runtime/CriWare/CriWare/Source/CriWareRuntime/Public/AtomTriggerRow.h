#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AtomTriggerRow.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FAtomTriggerRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Cue;
    
    FAtomTriggerRow();
};

