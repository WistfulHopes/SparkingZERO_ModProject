#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditFilter.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDRMEditFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenInGame;
    
    FKoratDRMEditFilter();
};

