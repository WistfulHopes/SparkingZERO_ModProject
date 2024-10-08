#pragma once
#include "CoreMinimal.h"
#include "KoratObjectLimitDataList.h"
#include "KoratObjectLimitDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratObjectLimitDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratObjectLimitDataList ParentGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RealLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoOverlapTest;
    
    SS_API FKoratObjectLimitDataAssetRecord();
};

