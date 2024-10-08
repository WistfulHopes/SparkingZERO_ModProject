#pragma once
#include "CoreMinimal.h"
#include "SSAdventureIFAgingEventData.generated.h"

USTRUCT(BlueprintType)
struct FSSAdventureIFAgingEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EventNames;
    
    SS_API FSSAdventureIFAgingEventData();
};

