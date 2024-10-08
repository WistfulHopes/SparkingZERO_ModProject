#pragma once
#include "CoreMinimal.h"
#include "KoratAuraAssignDataList.h"
#include "KoratFreeTimelineAssetGetComp.h"
#include "KoratFreeTimelineAuraAssetGetComp.generated.h"

class UKoratFreeTimelineAuraAssetClass;
class UKoratFreeTimelineInstanceData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratFreeTimelineAuraAssetGetComp : public UKoratFreeTimelineAssetGetComp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FKoratAuraAssignDataList AuraAssign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineAuraAssetClass* AuraAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKoratFreeTimelineInstanceData* InstanceData;
    
public:
    UKoratFreeTimelineAuraAssetGetComp(const FObjectInitializer& ObjectInitializer);

};

