#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerCardMenuStruct.h"
#include "SSPlayerCardControllerActor.generated.h"

class USSMenuGeneralDialog;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSPlayerCardControllerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerCardMenuStruct> MenuManagerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
public:
    ASSPlayerCardControllerActor(const FObjectInitializer& ObjectInitializer);

};

