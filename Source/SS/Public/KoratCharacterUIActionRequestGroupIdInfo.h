#pragma once
#include "CoreMinimal.h"
#include "KoratGroupIdDataList.h"
#include "KoratCharacterUIActionRequestGroupIdInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestGroupIdInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratGroupIdDataList UIActionGroupId;
    
    SS_API FKoratCharacterUIActionRequestGroupIdInfo();
};

