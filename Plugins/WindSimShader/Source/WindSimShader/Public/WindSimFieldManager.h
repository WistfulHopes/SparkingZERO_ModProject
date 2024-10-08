#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WindSimFieldManager.generated.h"

class UWindSimFieldManagerComponent;

UCLASS(Blueprintable)
class WINDSIMSHADER_API AWindSimFieldManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWindSimFieldManagerComponent* ManagerComponent;
    
public:
    AWindSimFieldManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowWindVelocityViewer(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    void EnableInputWindVelocityDebugDrawLine(bool bEnable);
    
};

