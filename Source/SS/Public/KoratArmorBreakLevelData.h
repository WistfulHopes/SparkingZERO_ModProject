#pragma once
#include "CoreMinimal.h"
#include "KoratArmorBreakLevelData.generated.h"

USTRUCT(BlueprintType)
struct FKoratArmorBreakLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BreakLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BreakLevelForGiant;
    
    SS_API FKoratArmorBreakLevelData();
};

