#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PresentBoxMenuStruct.h"
#include "SSPresentBoxControllerActor.generated.h"

class USSMenuGeneralDialog;
class USSOperationGuideSet;
class USSWaitDialog;

UCLASS(Blueprintable)
class ASSPresentBoxControllerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPresentBoxMenuStruct> MenuManagerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSWaitDialog* WaitDialog;
    
public:
    ASSPresentBoxControllerActor(const FObjectInitializer& ObjectInitializer);

};

