#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KoratMapAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMapAttributeData : public FTableRowBase {
    GENERATED_BODY()
public:
    SS_API FKoratMapAttributeData();
};

