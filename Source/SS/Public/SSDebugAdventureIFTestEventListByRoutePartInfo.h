#pragma once
#include "CoreMinimal.h"
#include "SSDebugAdventureIFTestEventListByRoutePartInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSDebugAdventureIFTestEventListByRoutePartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> List;
    
    SS_API FSSDebugAdventureIFTestEventListByRoutePartInfo();
};

