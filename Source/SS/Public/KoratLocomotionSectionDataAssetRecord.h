#pragma once
#include "CoreMinimal.h"
#include "KoratLocomotionSectionDataAssetRecord.generated.h"

class UKoratLocomotionSectionDataAsset;

USTRUCT(BlueprintType)
struct FKoratLocomotionSectionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratLocomotionSectionDataAsset* DataAsset;
    
    SS_API FKoratLocomotionSectionDataAssetRecord();
};

