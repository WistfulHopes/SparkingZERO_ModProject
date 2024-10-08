#pragma once
#include "CoreMinimal.h"
#include "EKoratBlastSlotType.h"
#include "KoratBlastActionDataAssetRecord.h"
#include "KoratBlastActionDataList.h"
#include "MutualDataAsset.h"
#include "KoratBlastActionDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratBlastActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBlastSlotType, FKoratBlastActionDataList> DefaultBlastAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBlastActionDataAssetRecord> Records;
    
public:
    UKoratBlastActionDataAsset();

};

