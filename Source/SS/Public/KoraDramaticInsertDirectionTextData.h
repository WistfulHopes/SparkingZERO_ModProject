#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticDirectionrListItem.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertDirectionTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertDirectionTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticDirectionrListItem InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertDirectionTextData();
};

