#pragma once
#include "CoreMinimal.h"
#include "SSBattleDirectionSettingUserDataSaveData.h"
#include "SSBattleDirectionUserDataSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleDirectionUserDataSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSBattleDirectionSettingUserDataSaveData Normal;
    
    SS_API FSSBattleDirectionUserDataSaveData();
};

