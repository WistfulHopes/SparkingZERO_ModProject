#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupUserDataCustomizeBuildupItemMySet.h"
#include "SSBattleSetupUserDataCustomizeBuildupItemMySets.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataCustomizeBuildupItemMySets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleSetupUserDataCustomizeBuildupItemMySet> MySets;
    
    SS_API FSSBattleSetupUserDataCustomizeBuildupItemMySets();
};

