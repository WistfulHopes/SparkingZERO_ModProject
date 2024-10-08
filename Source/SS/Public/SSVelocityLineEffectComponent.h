#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratVelocityLineEffectTypeDataList.h"
#include "KoratVelocityLineEffectsDataAssetRecord.h"
#include "SSVelocityLineEffectComponent.generated.h"

class ASSLevelSequenceActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSVelocityLineEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratVelocityLineEffectTypeDataList, FKoratVelocityLineEffectsDataAssetRecord> EffectSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratVelocityLineEffectTypeDataList, TSoftObjectPtr<ASSLevelSequenceActor>> SequenceActor;
    
public:
    USSVelocityLineEffectComponent(const FObjectInitializer& ObjectInitializer);

};

