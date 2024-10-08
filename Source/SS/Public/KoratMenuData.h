#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KoratMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMenuData : public FTableRowBase {
    GENERATED_BODY()
public:
    SS_API FKoratMenuData();
};

