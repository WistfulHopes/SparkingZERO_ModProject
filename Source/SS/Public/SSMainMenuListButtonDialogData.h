#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuListButtonDialogData.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuListButtonDialogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> ReplaceTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonTexts;
    
    SS_API FSSMainMenuListButtonDialogData();
};

