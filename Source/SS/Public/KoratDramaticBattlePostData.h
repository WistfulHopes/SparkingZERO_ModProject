#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleExtraDataList.h"
#include "KoratDramaticBattleSaveDataRecord.h"
#include "KoratDramaticCutDataRecord.h"
#include "KoratDramaticCutIDsData.h"
#include "KoratDramaticBattlePostData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattlePostData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleSaveDataRecord BattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutIDsData> ScenesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutDataRecord> CutScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleExtraDataList CopyExtraBattleId;
    
    FKoratDramaticBattlePostData();
};

