#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "KoratFormChangeCharacterEquipItems.generated.h"

USTRUCT(BlueprintType)
struct FKoratFormChangeCharacterEquipItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> EquipItems;
    
    SS_API FKoratFormChangeCharacterEquipItems();
};

