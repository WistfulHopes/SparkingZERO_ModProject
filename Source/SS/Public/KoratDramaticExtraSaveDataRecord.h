#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.h"
#include "KoratDramaticCommonSaveData.h"
#include "KoratDramaticExtraProgressData.h"
#include "SSUnLockDetail.h"
#include "KoratDramaticExtraSaveDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticExtraSaveDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticExtraProgressData> DramaticMissionProgressDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticCommonSaveData CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode UnLockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClearedNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSUnLockDetail UnLockDetail;
    
    FKoratDramaticExtraSaveDataRecord();
};

