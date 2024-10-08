#pragma once
#include "CoreMinimal.h"
#include "EWarpStartCondition.h"
#include "KoratBlastActionCategoryDataList.h"
#include "SSWarpSectionCommnad.generated.h"

USTRUCT(BlueprintType)
struct FSSWarpSectionCommnad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlastActionCategoryDataList setctionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpStartCondition sectionStartCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarpStartCondition sectionEndCondition;
    
    SS_API FSSWarpSectionCommnad();
};

