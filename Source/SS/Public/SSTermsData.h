#pragma once
#include "CoreMinimal.h"
#include "EKoratTermsMode.h"
#include "SSTermsData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSTermsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTermsMode TermsMode;
    
    FSSTermsData();
};

