#pragma once
#include "CoreMinimal.h"
#include "KoratHitBackMovementData.h"
#include "MutualDataAsset.h"
#include "SSHitBackMovementDataAsset.generated.h"

UCLASS(Blueprintable)
class USSHitBackMovementDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratHitBackMovementData HitBackMovementData;
    
    USSHitBackMovementDataAsset();

};

