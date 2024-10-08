#pragma once
#include "CoreMinimal.h"
#include "ESSWLibSideButtonType.h"
#include "SSWLibSideButtonTopElement.generated.h"

USTRUCT(BlueprintType)
struct FSSWLibSideButtonTopElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWLibSideButtonType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSWLibSideButtonType> Childs;
    
    SS_API FSSWLibSideButtonTopElement();
};

