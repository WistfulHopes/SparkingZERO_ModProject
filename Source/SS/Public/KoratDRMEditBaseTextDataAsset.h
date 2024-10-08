#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditBaseText.h"
#include "KoratDRMEditDataAsset.h"
#include "KoratDRMEditBaseTextDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratDRMEditBaseTextDataAsset : public UKoratDRMEditDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratDRMEditBaseText> Records;
    
public:
    UKoratDRMEditBaseTextDataAsset();

};

