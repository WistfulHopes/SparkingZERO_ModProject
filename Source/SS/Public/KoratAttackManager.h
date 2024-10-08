#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "KoratActionDataList.h"
#include "KoratGaveDamageParameter.h"
#include "KoratReceivedDamageParameter.h"
#include "KoratAttackManager.generated.h"

class AActor;
class ASSCharacter;

UCLASS(Blueprintable)
class UKoratAttackManager : public UObject {
    GENERATED_BODY()
public:
    UKoratAttackManager();

    UFUNCTION(BlueprintCallable)
    static bool IsMapChangeEscapePhysicalSurface(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMapChangeDestructPhysicalSurface(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAirWallPhysicalSurface(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    static bool GaveDamageAtStrcut(const FKoratGaveDamageParameter& InGaveDamageParameter);
    
    UFUNCTION(BlueprintCallable)
    static bool GaveDamage(AActor* InGaveDamageActor, ASSCharacter* FiredCharacter, AActor* InReceivedDamageActor, const FKoratActionDataList& InAction, const FTransform InHitTransform, const FName InHitBoneName, const FKoratReceivedDamageParameter& InReceivedDamageParameter, bool bBlastFinished);
    
};

