#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KoratMapData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    SS_API FKoratMapData();
};

