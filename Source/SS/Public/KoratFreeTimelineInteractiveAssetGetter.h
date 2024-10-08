#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratFreeTimelineAssetGetter.h"
#include "KoratFreeTimelineInteractiveAssetGetter.generated.h"

class UKoratFreeTimelineInstanceData;
class UKoratInteractTriggerTypeGetter;
class UKoratInteractiveAtbTypeGetter;

UCLASS(Blueprintable, EditInlineNew)
class UKoratFreeTimelineInteractiveAssetGetter : public UKoratFreeTimelineAssetGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratInteractiveAtbTypeGetter* AttributeGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratInteractTriggerTypeGetter* TriggerGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
public:
    UKoratFreeTimelineInteractiveAssetGetter();

};

