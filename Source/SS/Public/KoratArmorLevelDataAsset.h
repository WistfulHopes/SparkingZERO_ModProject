#pragma once
#include "CoreMinimal.h"
#include "KoratArmorLevelData.h"
#include "MutualDataAsset.h"
#include "KoratArmorLevelDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratArmorLevelDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratArmorLevelData> Records;
    
public:
    UKoratArmorLevelDataAsset();

};

