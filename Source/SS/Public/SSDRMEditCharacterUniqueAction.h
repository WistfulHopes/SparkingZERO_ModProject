#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSDRMEditCharacterUniqueActionResource.h"
#include "SSDRMEditCharacterUniqueAction.generated.h"

USTRUCT(BlueprintType)
struct FSSDRMEditCharacterUniqueAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSDRMEditCharacterUniqueActionResource> Resources;
    
    SS_API FSSDRMEditCharacterUniqueAction();
};

