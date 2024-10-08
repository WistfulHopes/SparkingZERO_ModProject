#pragma once
#include "CoreMinimal.h"
#include "KoratFreeTimelineAtbColliderParam.generated.h"

class UShapeComponent;

USTRUCT(BlueprintType)
struct FKoratFreeTimelineAtbColliderParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* Collider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UShapeComponent> SelectCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CollisionPresetName;
    
    SS_API FKoratFreeTimelineAtbColliderParam();
};

