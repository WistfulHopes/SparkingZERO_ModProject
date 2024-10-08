#pragma once
#include "CoreMinimal.h"
#include "EKoratDecalMaterialType.h"
#include "KoratEffectInteractDecalTypeDataList.h"
#include "KoratInteractDecalBranchDataRecord.generated.h"

class UKoratInteractAtbDecalBranchMaterialDataAsset;

USTRUCT(BlueprintType)
struct FKoratInteractDecalBranchDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratEffectInteractDecalTypeDataList DecalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratInteractAtbDecalBranchMaterialDataAsset* BranchDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDecalMaterialType IndexValue;
    
    SS_API FKoratInteractDecalBranchDataRecord();
};

