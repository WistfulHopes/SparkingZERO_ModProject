#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuLocText.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuLocText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Literal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    SS_API FSSMainMenuLocText();
};

