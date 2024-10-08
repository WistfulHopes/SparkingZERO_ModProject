#pragma once
#include "CoreMinimal.h"
#include "KoratCultureTextRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratCultureTextRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Text;
    
    SS_API FKoratCultureTextRecord();
};

