#pragma once
#include "CoreMinimal.h"
#include "EKoratCharaSortMenuElementsType.h"
#include "KoratCharaSortMenuDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharaSortMenuDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharaSortMenuElementsType Type;
    
    SS_API FKoratCharaSortMenuDataRecord();
};

