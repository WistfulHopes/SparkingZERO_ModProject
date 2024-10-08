#pragma once
#include "CoreMinimal.h"
#include "KoratAiTypeDataList.h"
#include "KoratFormChangeCharacterEquipItems.h"
#include "KoratBattlePlayLevel.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattlePlayLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFormChangeCharacterEquipItems EquipItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CpuLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList CpuThinkingType;
    
    SS_API FKoratBattlePlayLevel();
};

