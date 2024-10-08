#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBlastImpactDebugActor.generated.h"

class ASSCharacter;
class UArrowComponent;
class UBillboardComponent;
class USphereComponent;

UCLASS(Blueprintable)
class ASSBlastImpactDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTickIfViewportsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> TargetCharacter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponentRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponentTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
public:
    ASSBlastImpactDebugActor(const FObjectInitializer& ObjectInitializer);

};

