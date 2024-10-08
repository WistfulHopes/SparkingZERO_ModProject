#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataNameInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataNameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShortName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EventName;
    
    SS_API FKoratCharacterDataNameInfo();
};

