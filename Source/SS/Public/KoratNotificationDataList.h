#pragma once
#include "CoreMinimal.h"
#include "KoratNotificationDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratNotificationDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratNotificationDataList();
};

