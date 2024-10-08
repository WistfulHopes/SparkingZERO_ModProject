#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "KoratInteractSpaceAreaTypeGetter.generated.h"

class UKoratFreeTimelineInstanceData;

UCLASS(Blueprintable, EditInlineNew)
class UKoratInteractSpaceAreaTypeGetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSpaceAreaTypeDataList DefaultValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
public:
    UKoratInteractSpaceAreaTypeGetter();

    UFUNCTION(BlueprintCallable)
    void SetDefaultValue(const FKoratSpaceAreaTypeDataList& InType);
    
};

