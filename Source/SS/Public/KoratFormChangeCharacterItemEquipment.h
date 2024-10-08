#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratFormChangeCharacterEquipItems.h"
#include "KoratFormChangeCharacterItemEquipment.generated.h"

USTRUCT(BlueprintType)
struct FKoratFormChangeCharacterItemEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FKoratFormChangeCharacterEquipItems> FormChangeCharacterEquipItems;
    
    SS_API FKoratFormChangeCharacterItemEquipment();
};

