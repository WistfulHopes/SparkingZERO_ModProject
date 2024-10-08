#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCharacterTypeDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratCharacterTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCharacterTypeDataAssetRecord> Records;
    
public:
    UKoratCharacterTypeDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterTypeName(const FName& InKey) const;
    
};

