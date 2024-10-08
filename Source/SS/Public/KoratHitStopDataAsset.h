#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratHitStopDataAsset.generated.h"

class USSHitStopDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratHitStopDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSHitStopDataAsset*> PtrRecords;
    
public:
    UKoratHitStopDataAsset();

};

