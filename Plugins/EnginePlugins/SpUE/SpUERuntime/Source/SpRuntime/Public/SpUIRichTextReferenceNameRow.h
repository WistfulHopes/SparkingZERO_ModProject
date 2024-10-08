#pragma once
#include "CoreMinimal.h"
#include "SpUIRichTextReferenceRow.h"
#include "SpUIRichTextReferenceNameRow.generated.h"

USTRUCT(BlueprintType)
struct FSpUIRichTextReferenceNameRow : public FSpUIRichTextReferenceRow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
public:
    SPRUNTIME_API FSpUIRichTextReferenceNameRow();
};

