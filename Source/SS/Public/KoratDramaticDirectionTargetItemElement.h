#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticDirectionTargetItemElement.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticDirectionTargetItemElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderNum;
    
    SS_API FKoratDramaticDirectionTargetItemElement();
};

