#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "SSCharacterSearchScaleInActionParameter.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterSearchScaleInActionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchScaleOwn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuraSearchScaleTarget;
    
    SS_API FSSCharacterSearchScaleInActionParameter();
};

