#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterAnnounce.generated.h"

class USSAnnounceDataAsset;

UCLASS(Blueprintable)
class USSCharacterAnnounce : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAnnounceDataAsset* AnnounceData;
    
    USSCharacterAnnounce();

};

