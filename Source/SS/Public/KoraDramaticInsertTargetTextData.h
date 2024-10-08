#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingConditionTargetType.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertTargetTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertTargetTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleDirectingConditionTargetType InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertTargetTextData();
};

