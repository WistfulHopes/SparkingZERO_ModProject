#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "SSUnionSupportCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSSUnionSupportCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList SubCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterItemDataList EquipItem;
    
    SS_API FSSUnionSupportCharacter();
};

