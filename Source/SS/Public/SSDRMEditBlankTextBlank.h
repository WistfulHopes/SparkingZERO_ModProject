#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditWordTextDataList.h"
#include "SSDRMEditBlankTextBlank.generated.h"

USTRUCT(BlueprintType)
struct FSSDRMEditBlankTextBlank {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 WordCategoryFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditWordTextDataList DefaultWord;
    
    SS_API FSSDRMEditBlankTextBlank();
};

