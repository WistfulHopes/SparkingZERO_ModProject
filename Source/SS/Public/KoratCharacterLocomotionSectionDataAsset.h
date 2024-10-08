#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratLocomotionSectionDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCharacterLocomotionSectionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCharacterLocomotionSectionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratLocomotionSectionDataAssetRecord> RecordsByDataList;
    
    UKoratCharacterLocomotionSectionDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

