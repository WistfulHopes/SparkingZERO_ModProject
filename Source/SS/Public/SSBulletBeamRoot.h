#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSBulletBeamRoot.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ASSBulletBeamRoot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RootCompo;
    
    ASSBulletBeamRoot(const FObjectInitializer& ObjectInitializer);

};

