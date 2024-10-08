#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticDirectionItemListElement.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticDirectionItemListElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderNum;
    
    SS_API FKoratDramaticDirectionItemListElement();
};

