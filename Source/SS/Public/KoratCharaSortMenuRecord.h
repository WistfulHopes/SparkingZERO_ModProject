#pragma once
#include "CoreMinimal.h"
#include "EKoratCharaSortMenuElementsType.h"
#include "KoratCharaSortMenuRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharaSortMenuRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharaSortMenuElementsType Type;
    
    SS_API FKoratCharaSortMenuRecord();
};

