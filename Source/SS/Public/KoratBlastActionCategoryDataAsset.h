#pragma once
#include "CoreMinimal.h"
#include "KoratBlastActionCategoryDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBlastActionCategoryDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBlastActionCategoryDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBlastActionCategoryDataAssetRecord> Records;
    
public:
    UKoratBlastActionCategoryDataAsset();

};

