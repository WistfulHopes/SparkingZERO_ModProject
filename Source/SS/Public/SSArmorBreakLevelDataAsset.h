#pragma once
#include "CoreMinimal.h"
#include "KoratArmorBreakLevelData.h"
#include "MutualDataAsset.h"
#include "SSArmorBreakLevelDataAsset.generated.h"

UCLASS(Blueprintable)
class USSArmorBreakLevelDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratArmorBreakLevelData ArmorBreakLevelData;
    
    USSArmorBreakLevelDataAsset();

};

