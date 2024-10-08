#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionRequestSectionInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestSectionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UIActionSectionName;
    
    SS_API FKoratCharacterUIActionRequestSectionInfo();
};

