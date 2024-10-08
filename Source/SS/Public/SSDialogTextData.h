#pragma once
#include "CoreMinimal.h"
#include "SSDialogTextData.generated.h"

USTRUCT(BlueprintType)
struct FSSDialogTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContextText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonTexts;
    
    SS_API FSSDialogTextData();
};

