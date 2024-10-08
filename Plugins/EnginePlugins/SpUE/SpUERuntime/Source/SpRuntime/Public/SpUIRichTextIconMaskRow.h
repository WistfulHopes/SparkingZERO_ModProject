#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "SpUIRichTextIconMaskRow.generated.h"

USTRUCT(BlueprintType)
struct FSpUIRichTextIconMaskRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeOfShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeOfLong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ShortMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiddleMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LongMask;
    
    SPRUNTIME_API FSpUIRichTextIconMaskRow();
};

