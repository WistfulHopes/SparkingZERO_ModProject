#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePracticeStartPositionTypeDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattlePracticeStartPositionTypeDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratBattlePracticeStartPositionTypeDataList();
};

