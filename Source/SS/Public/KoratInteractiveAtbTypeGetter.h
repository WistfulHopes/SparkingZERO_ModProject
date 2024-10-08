#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratInteractAtbTypeDataList.h"
#include "KoratInteractiveAtbTypeGetter.generated.h"

class UKoratFreeTimelineInstanceData;

UCLASS(Blueprintable, EditInlineNew)
class UKoratInteractiveAtbTypeGetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInteractAtbTypeDataList DefaultValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
public:
    UKoratInteractiveAtbTypeGetter();

    UFUNCTION(BlueprintCallable)
    void SetDefaultValue(const FKoratInteractAtbTypeDataList& InType);
    
};

