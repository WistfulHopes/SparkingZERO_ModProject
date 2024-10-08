#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EndingMenuStruct.h"
#include "SSEndingControllerActor.generated.h"

class USSMenuButton;
class USSMenuManager;

UCLASS(Blueprintable)
class ASSEndingControllerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndingMenuStruct> MenuManagerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuManager* SkipWidget;
    
public:
    ASSEndingControllerActor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSkipWidgetButtonProgress(USSMenuButton* InMenuButton, float InProgress);
    
};

