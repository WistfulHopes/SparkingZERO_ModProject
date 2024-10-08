#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotifyState.h"
#include "SSAnimNotifyStateEvent.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USSAnimNotifyStateEvent : public USSAnimNotifyState {
    GENERATED_BODY()
public:
    USSAnimNotifyStateEvent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveNotifyEndEvent(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReceiveNotifyBeginEvent(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) const;
    
};

