#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineAssetGetComp.h"
#include "KoratSpaceAreaAssetGetComponent.generated.h"

class UKoratFreeTimelineInstanceData;
class UKoratInteractSpaceAreaTypeGetter;
class UKoratInteractTriggerTypeGetter;
class ULevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratSpaceAreaAssetGetComponent : public UKoratFreeTimelineAssetGetComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> DefaultAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKoratInteractSpaceAreaTypeGetter> SpaceAreaTypeGetterBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UKoratInteractTriggerTypeGetter> TriggerTypeGetterBlueprint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratInteractSpaceAreaTypeGetter* SpaceAreaGetter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratInteractTriggerTypeGetter* TriggerGetter;
    
public:
    UKoratSpaceAreaAssetGetComponent(const FObjectInitializer& ObjectInitializer);

};

