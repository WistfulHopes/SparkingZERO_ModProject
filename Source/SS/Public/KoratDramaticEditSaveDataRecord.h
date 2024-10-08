#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratDramaticBattleExtraDataList.h"
#include "KoratDramaticBattleSaveDataRecord.h"
#include "KoratDramaticCommonSaveData.h"
#include "KoratDramaticCutDataRecord.h"
#include "KoratDramaticCutIDsData.h"
#include "KoratDramaticEditSaveDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticEditSaveDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleSaveDataRecord DramaticEditData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EditBattleVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EditDramaVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 OriginBattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoodCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPosted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticCommonSaveData CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutDataRecord> CutScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutIDsData> Scenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EditDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> CutDefaultThumbnails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EditBattleDateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleExtraDataList CopyExtraBattleId;
    
    FKoratDramaticEditSaveDataRecord();
};

