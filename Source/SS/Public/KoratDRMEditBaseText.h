#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditBaseText.generated.h"

USTRUCT(BlueprintType)
struct FKoratDRMEditBaseText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    SS_API FKoratDRMEditBaseText();
};

