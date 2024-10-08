#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticTipsSaveDataRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticTipsSaveDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsListChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIntroChecked;
    
    FKoratDramaticTipsSaveDataRecord();
};

