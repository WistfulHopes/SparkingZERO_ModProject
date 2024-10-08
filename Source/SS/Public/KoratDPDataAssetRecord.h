#pragma once
#include "CoreMinimal.h"
#include "KoratDPDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratDPDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifePointScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeCharacterCooldown;
    
    SS_API FKoratDPDataAssetRecord();
};

