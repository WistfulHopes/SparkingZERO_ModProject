#pragma once
#include "CoreMinimal.h"
#include "EKoratActionAttackType.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertAtackTypeTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertAtackTypeTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratActionAttackType InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertAtackTypeTextData();
};

