#pragma once
#include "CoreMinimal.h"
#include "KoratBuffFormTypeDataList.h"
#include "SSBuffFormRequest.generated.h"

USTRUCT(BlueprintType)
struct FSSBuffFormRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBuffFormTypeDataList BuffForm;
    
    SS_API FSSBuffFormRequest();
};

