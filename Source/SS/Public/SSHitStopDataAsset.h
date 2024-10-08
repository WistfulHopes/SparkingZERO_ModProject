#pragma once
#include "CoreMinimal.h"
#include "KoratHitStopData.h"
#include "MutualDataAsset.h"
#include "SSHitStopDataAsset.generated.h"

UCLASS(Blueprintable)
class USSHitStopDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratHitStopData HitStopData;
    
    USSHitStopDataAsset();

};

