#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESpeakerType.h"
#include "AtomOutputPortDataTable.generated.h"

USTRUCT(BlueprintType)
struct FAtomOutputPortDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputPortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsrRackID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeakerType SpeakerType;
    
    CRIWARERUNTIME_API FAtomOutputPortDataTable();
};

