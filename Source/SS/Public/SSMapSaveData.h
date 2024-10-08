#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.h"
#include "SSUnLockDetail.h"
#include "SSMapSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSMapSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode UnLockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSUnLockDetail UnLockDetail;
    
    SS_API FSSMapSaveData();
};

