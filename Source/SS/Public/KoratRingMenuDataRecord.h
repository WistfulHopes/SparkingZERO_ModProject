#pragma once
#include "CoreMinimal.h"
#include "KoratRingMenuDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratRingMenuDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CommandNameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CommandDiscriptionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommandIcon;
    
    SS_API FKoratRingMenuDataRecord();
};

