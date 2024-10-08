#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.h"
#include "SSUnLockDetail.h"
#include "SSMovieSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSMovieSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode UnLockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSUnLockDetail UnLockDetail;
    
    SS_API FSSMovieSaveData();
};

