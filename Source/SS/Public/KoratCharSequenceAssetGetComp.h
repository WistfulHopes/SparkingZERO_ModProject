#pragma once
#include "CoreMinimal.h"
#include "EKoratFreeTimelineType.h"
#include "KoratFreeTimelineAssetGetComp.h"
#include "KoratFreeTimelineTypeSetting.h"
#include "KoratCharSequenceAssetGetComp.generated.h"

class UKoratFreeTimelineInstanceData;
class ULevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratCharSequenceAssetGetComp : public UKoratFreeTimelineAssetGetComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DefaultAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKoratFreeTimelineType CurrentTimelineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratFreeTimelineTypeSetting CurrentSetting;
    
public:
    UKoratCharSequenceAssetGetComp(const FObjectInitializer& ObjectInitializer);

};

