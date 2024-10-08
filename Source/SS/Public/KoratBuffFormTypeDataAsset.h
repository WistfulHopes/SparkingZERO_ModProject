#pragma once
#include "CoreMinimal.h"
#include "KoratBuffFormTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBuffFormTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBuffFormTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBuffFormTypeDataAssetRecord> Records;
    
    UKoratBuffFormTypeDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

