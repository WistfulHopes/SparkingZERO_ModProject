#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleAdditionalData.h"
#include "KoratDramaticBattleCreaterInfo.h"
#include "KoratDramaticBattleExtraDataList.h"
#include "KoratDramaticBattleImageData.h"
#include "KoratDramaticCutDataRecord.h"
#include "KoratDramaticCutIDsData.h"
#include "KoratDramaticBattleCommonListData.generated.h"

class USSDramaticBattleDataRecordAsset;

USTRUCT(BlueprintType)
struct FKoratDramaticBattleCommonListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* DramaticEditData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* GeneratedDramaticEditData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EditBattleVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EditDramaVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCreaterInfo CreaterInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 BattleId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 OriginBattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleExtraDataList CopyExtraBattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleAdditionalData AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleImageData ImageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutIDsData> ScenesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDramaticCutDataRecord> CutScenes;
    
    SS_API FKoratDramaticBattleCommonListData();
};

