#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "SSCharacterInterface.h"
#include "SSBattleVirtualTarget.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class ASSBattleVirtualTarget : public APawn, public ISSCharacterInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    ASSBattleVirtualTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetHomingTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHomingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetActionTargetTransform() const;
    

    // Fix for true pure virtual functions not being implemented
};

