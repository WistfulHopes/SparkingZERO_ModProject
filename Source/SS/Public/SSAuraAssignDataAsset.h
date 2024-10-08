#pragma once
#include "CoreMinimal.h"
#include "KoratAuraAssignDataList.h"
#include "MutualDataAsset.h"
#include "SSAuraAssignDataAssetRecord.h"
#include "SSAuraAssignDataAsset.generated.h"

UCLASS(Blueprintable)
class USSAuraAssignDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAuraAssignDataList, FSSAuraAssignDataAssetRecord> Records;
    
    USSAuraAssignDataAsset();

};

