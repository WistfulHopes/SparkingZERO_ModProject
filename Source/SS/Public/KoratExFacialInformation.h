#pragma once
#include "CoreMinimal.h"
#include "KoratExFacialInformation.generated.h"

USTRUCT(BlueprintType)
struct FKoratExFacialInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExtensionType;
    
    SS_API FKoratExFacialInformation();
};

