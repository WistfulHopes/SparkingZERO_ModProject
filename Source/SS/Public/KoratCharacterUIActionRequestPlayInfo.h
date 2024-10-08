#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionRequestPlayInfo.generated.h"

class UKoratMLSDataAsset;

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestPlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratMLSDataAsset* UIActionMLS;
    
    SS_API FKoratCharacterUIActionRequestPlayInfo();
};

