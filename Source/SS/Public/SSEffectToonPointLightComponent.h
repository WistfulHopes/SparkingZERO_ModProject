#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratCharacterPointLightData.h"
#include "KoratEffectToonPointLightGroupDataAssetRecord.h"
#include "SSEffectToonPointLightComponent.generated.h"

class AActor;
class UKoratSelectEffectColorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USSEffectToonPointLightComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratEffectToonPointLightGroupDataAssetRecord GroupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData LightColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDedicatedLightColorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKoratSelectEffectColorComponent* KoratSelectEffectColorComponent;
    
public:
    USSEffectToonPointLightComponent(const FObjectInitializer& ObjectInitializer);

};

