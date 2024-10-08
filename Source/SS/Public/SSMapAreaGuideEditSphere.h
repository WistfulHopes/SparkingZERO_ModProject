#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "SSMapAreaGuideEditSphere.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASSMapAreaGuideEditSphere : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* connectedActor;
    
    ASSMapAreaGuideEditSphere(const FObjectInitializer& ObjectInitializer);

};

