#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "KoratBattlePlayLevelSet.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattlePlayLevelSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> EquipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CpuLevel;
    
    SS_API FKoratBattlePlayLevelSet();
};

