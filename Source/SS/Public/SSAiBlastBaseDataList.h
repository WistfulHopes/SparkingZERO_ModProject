#pragma once
#include "CoreMinimal.h"
#include "KoratAiBlastTypeDataList.h"
#include "SSAiAttackDataList.h"
#include "SSAiBlastBaseDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiBlastBaseDataList : public FSSAiAttackDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratAiBlastTypeDataList> BlastTypes;
    
    FSSAiBlastBaseDataList();
};

