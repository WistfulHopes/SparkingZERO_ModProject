#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterParameterChanging.h"
#include "KoratBuffParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratBuffParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterParameterChanging ParameterChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNumb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    SS_API FKoratBuffParameter();
};

