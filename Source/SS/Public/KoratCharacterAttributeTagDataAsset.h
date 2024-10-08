#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterAttributeTagDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCharacterAttributeTagDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterAttributeTagDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterAttributeTagDataAssetRecord> Records;
    
public:
    UKoratCharacterAttributeTagDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName(const FName& InKey) const;
    
};

