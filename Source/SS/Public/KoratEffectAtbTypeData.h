#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "KoratEffectAtbTypeData.generated.h"

USTRUCT(BlueprintType)
struct FKoratEffectAtbTypeData : public FTableRowBase {
    GENERATED_BODY()
public:
    SS_API FKoratEffectAtbTypeData();
};

