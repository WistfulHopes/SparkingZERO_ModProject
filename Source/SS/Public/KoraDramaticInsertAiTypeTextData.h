#pragma once
#include "CoreMinimal.h"
#include "KoratAiTypeDataList.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertAiTypeTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertAiTypeTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertAiTypeTextData();
};

