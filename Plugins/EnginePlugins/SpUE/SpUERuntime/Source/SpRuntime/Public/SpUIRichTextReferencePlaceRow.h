#pragma once
#include "CoreMinimal.h"
#include "SpUIRichTextReferenceRow.h"
#include "SpUIRichTextReferencePlaceRow.generated.h"

USTRUCT(BlueprintType)
struct FSpUIRichTextReferencePlaceRow : public FSpUIRichTextReferenceRow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
public:
    SPRUNTIME_API FSpUIRichTextReferencePlaceRow();
};

