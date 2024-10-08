#pragma once
#include "CoreMinimal.h"
#include "KoratBuffCategoryDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBuffCategoryDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API UKoratBuffCategoryDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OtherOverlapMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBuffCategoryDataAssetRecord> Records;
    
public:
    UKoratBuffCategoryDataAsset();

};

