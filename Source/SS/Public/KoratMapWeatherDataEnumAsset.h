#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratMapWeatherDataEnumAsset.generated.h"

UCLASS(Blueprintable)
class UKoratMapWeatherDataEnumAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Table;
    
public:
    UKoratMapWeatherDataEnumAsset();

};

