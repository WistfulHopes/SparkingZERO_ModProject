#pragma once
#include "CoreMinimal.h"
#include "KoratArmorData.h"
#include "MutualDataAsset.h"
#include "SSArmorDataAsset.generated.h"

UCLASS(Blueprintable)
class USSArmorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratArmorData ArmorData;
    
    USSArmorDataAsset();

};

