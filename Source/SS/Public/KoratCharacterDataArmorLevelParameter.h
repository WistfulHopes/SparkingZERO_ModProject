#pragma once
#include "CoreMinimal.h"
#include "EKoratActionCategoryType.h"
#include "EKoratActionSubCategoryType.h"
#include "KoratArmorDataList.h"
#include "KoratCharacterDataArmorLevelParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataArmorLevelParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratArmorDataList Armor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitBackRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EKoratActionCategoryType> ForceEnableAttackActionCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EKoratActionSubCategoryType> ForceEnableAttackActionSubCategories;
    
    SS_API FKoratCharacterDataArmorLevelParameter();
};

