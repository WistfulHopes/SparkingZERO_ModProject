#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingCharacterStateType.h"
#include "KoratDramaticDirectionItemListElement.h"
#include "KoraDramaticInsertCharacterStateTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoraDramaticInsertCharacterStateTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleDirectingCharacterStateType InsertItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticDirectionItemListElement InsertText;
    
    SS_API FKoraDramaticInsertCharacterStateTextData();
};

