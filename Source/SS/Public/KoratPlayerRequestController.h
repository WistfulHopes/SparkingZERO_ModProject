#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratFreeTimelineRequestInfo.h"
#include "KoratPlayerRequestController.generated.h"

UCLASS(Blueprintable)
class UKoratPlayerRequestController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineRequestInfo RequestInfo;
    
    UKoratPlayerRequestController();

};

