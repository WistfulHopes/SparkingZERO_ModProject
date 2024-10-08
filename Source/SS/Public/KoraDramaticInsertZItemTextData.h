#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertZItemTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertZItemTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterItemDataList InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertZItemTextData();
};

