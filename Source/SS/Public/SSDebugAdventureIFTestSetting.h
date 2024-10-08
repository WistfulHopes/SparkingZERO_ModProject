#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSDebugAdventureIFTestSetting.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugAdventureIFTestSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventRepeat;
    
    SS_API FSSDebugAdventureIFTestSetting();
};

