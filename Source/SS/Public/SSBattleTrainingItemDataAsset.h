#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingItemLevelType.h"
#include "KoratBattleTrainingSettingDataList.h"
#include "MutualDataAsset.h"
#include "SSBattleTrainingItemDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBattleTrainingItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Commentary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSBattleTrainingItemLevelType Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTrainingSettingDataList setting;
    
    USSBattleTrainingItemDataAsset();

};

