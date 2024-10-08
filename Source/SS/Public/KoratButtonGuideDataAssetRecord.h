#pragma once
#include "CoreMinimal.h"
#include "KoratButtonGuideData.h"
#include "KoratButtonGuideDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratButtonGuideDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratButtonGuideData> ButtonGuideData;
    
    SS_API FKoratButtonGuideDataAssetRecord();
};

