#pragma once
#include "CoreMinimal.h"
#include "KoratBattleDirectingBuffDataList.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertBuffTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertBuffTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingBuffDataList InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertBuffTextData();
};

