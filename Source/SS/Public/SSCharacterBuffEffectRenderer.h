#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EKoratBuffNotifyType.h"
#include "KoratBuffEffectInstance.h"
#include "KoratBuffId.h"
#include "KoratUnitBuffInfo.h"
#include "SSCharacterBuffEffectRenderer.generated.h"

class ASSCharacterBuffManager;

UCLASS(Blueprintable)
class ASSCharacterBuffEffectRenderer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratBuffId, FKoratBuffEffectInstance> BuffIntances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASSCharacterBuffManager> DependentSourceBuffManagerPtr;
    
public:
    ASSCharacterBuffEffectRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnBuffEvent(const FKoratBuffId& InHandle, const FKoratUnitBuffInfo& InBuffInfo, EKoratBuffNotifyType InNotifyType);
    
};

