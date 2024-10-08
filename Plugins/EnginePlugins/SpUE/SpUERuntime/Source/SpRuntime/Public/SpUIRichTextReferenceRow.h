#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpUIRichTextReferenceRow.generated.h"

USTRUCT(BlueprintType)
struct FSpUIRichTextReferenceRow : public FTableRowBase {
    GENERATED_BODY()
public:
    SPRUNTIME_API FSpUIRichTextReferenceRow();
};

