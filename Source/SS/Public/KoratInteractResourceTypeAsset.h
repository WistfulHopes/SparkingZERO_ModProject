#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratInteractResourceTypeAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractResourceTypeAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Records;
    
public:
    UKoratInteractResourceTypeAsset();

};

