#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "SSBattleSetupUserDataCustomizeBuildupItemMySet.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataCustomizeBuildupItemMySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> Items;
    
    SS_API FSSBattleSetupUserDataCustomizeBuildupItemMySet();
};

