#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KoratTransformCopyControlInfo.h"
#include "KoratTransformCopyTargetInfo.h"
#include "KoratTransformCopyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratTransformCopyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratTransformCopyTargetInfo> TargetInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratTransformCopyControlInfo> ControlList;
    
    UKoratTransformCopyComponent(const FObjectInitializer& ObjectInitializer);

};

