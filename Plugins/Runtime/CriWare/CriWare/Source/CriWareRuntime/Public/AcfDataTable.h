#pragma once
#include "CoreMinimal.h"
#include "AtomConfigDataTable.h"
#include "AcfDataTable.generated.h"

USTRUCT(BlueprintType)
struct FAcfDataTable : public FAtomConfigDataTable {
    GENERATED_BODY()
public:
    CRIWARERUNTIME_API FAcfDataTable();
};

