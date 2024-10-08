#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingAction.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertConditionsActionTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertConditionsActionTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleDirectingAction InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertConditionsActionTextData();
};

