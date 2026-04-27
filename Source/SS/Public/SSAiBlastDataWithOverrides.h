#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterItemDataList.h"
#include "SSAiBlastDataStats.h"
#include "SSAiBlastDataWithOverrides.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSAiBlastDataWithOverrides : public FSSAiBlastDataStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterItemDataList, FSSAiBlastDataStats> ItemOverrides;
    
    FSSAiBlastDataWithOverrides();
};

