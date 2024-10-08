#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratCharacterAutoUpdateDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCharacterAutoUpdateDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterCapsuleRadius;
    
    UKoratCharacterAutoUpdateDataAsset();

};

