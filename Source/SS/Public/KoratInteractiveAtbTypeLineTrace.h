#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineLineTraceParam.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractiveAtbTypeGetter.h"
#include "KoratInteractiveAtbTypeLineTrace.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UKoratInteractiveAtbTypeLineTrace : public UKoratInteractiveAtbTypeGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineLineTraceParam LineTraceParams;
    
    UKoratInteractiveAtbTypeLineTrace();

    UFUNCTION(BlueprintCallable)
    FKoratInteractAtbTypeDataList GetParameter(const int32 InUniqueId);
    
};

