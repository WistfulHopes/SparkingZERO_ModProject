#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineParamBase.h"
#include "KoratFreeTimelineTest.generated.h"

USTRUCT(BlueprintType)
struct FKoratFreeTimelineTest : public FKoratFreeTimelineParamBase {
    GENERATED_BODY()
public:
    SS_API FKoratFreeTimelineTest();
};

