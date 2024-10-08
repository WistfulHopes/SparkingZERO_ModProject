#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "SSChangeCharacterActionDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSChangeCharacterActionDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratActionDataList ActionData;
    
    SS_API FSSChangeCharacterActionDataAssetRecord();
};

