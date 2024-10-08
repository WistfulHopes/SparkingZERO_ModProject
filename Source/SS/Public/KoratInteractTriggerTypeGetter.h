#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratInteractTriggerTypeDataList.h"
#include "KoratInteractTriggerTypeGetter.generated.h"

class UKoratFreeTimelineInstanceData;

UCLASS(Blueprintable, EditInlineNew)
class UKoratInteractTriggerTypeGetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractTriggerTypeDataList DefaultValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
public:
    UKoratInteractTriggerTypeGetter();

    UFUNCTION(BlueprintCallable)
    void SetDefaultValue(const FKoratInteractTriggerTypeDataList& InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FKoratInteractTriggerTypeDataList GetParameter(const int32 InUniqueId);
    
};

