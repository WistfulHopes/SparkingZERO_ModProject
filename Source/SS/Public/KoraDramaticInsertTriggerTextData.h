#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticDirectingTriggerListItem.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertTriggerTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertTriggerTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticDirectingTriggerListItem InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertTriggerTextData();
};

