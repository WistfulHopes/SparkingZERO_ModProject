#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratBuffDataArray.h"
#include "MutualDataAsset.h"
#include "KoratCharacterBuffDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCharacterBuffDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FKoratBuffDataArray> PtrRecordsByDataList;
    
    UKoratCharacterBuffDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

