#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CultureText.generated.h"

USTRUCT(BlueprintType)
struct FCultureText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Text;
    
    SS_API FCultureText();
};

