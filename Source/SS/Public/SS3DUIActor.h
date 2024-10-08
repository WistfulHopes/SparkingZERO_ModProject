#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SlateWrapperTypes.h"
#include "SS3DUIActor.generated.h"

class ULevelSequence;

UCLASS(Blueprintable)
class ASS3DUIActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> ShowSequencer;
    
public:
    ASS3DUIActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryCallWidgetEvent(const FName InFuncName);
    
    UFUNCTION(BlueprintCallable)
    void ShowWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetVisibility(const ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HideWidget();
    
};

