#pragma once
#include "CoreMinimal.h"
#include "KoratUILevelCancelWidget.generated.h"

class USSMenuManager;

USTRUCT(BlueprintType)
struct FKoratUILevelCancelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuManager> From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSMenuManager> To;
    
    SS_API FKoratUILevelCancelWidget();
};

