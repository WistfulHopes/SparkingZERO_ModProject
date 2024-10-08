#pragma once
#include "CoreMinimal.h"
#include "KoratArmorDataList.h"
#include "KoratArmorLevelData.generated.h"

USTRUCT(BlueprintType)
struct FKoratArmorLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratArmorDataList Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitBackRate;
    
    SS_API FKoratArmorLevelData();
};

