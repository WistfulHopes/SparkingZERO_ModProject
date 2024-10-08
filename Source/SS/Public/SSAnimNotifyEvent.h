#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotify.h"
#include "SSAnimNotifyEvent.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotifyEvent : public USSAnimNotify {
    GENERATED_BODY()
public:
    USSAnimNotifyEvent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveNotifyEvent(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

