#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENewBattleCameraType.h"
#include "SSNotifyActionCameraTargetSpawnParameters.h"
#include "Templates/SubclassOf.h"
#include "SSNotifyActionCameraTargetManager.generated.h"

class AController;
class ASSNotifyActionCameraTargetActor;
class UWorld;

UCLASS(Blueprintable)
class USSNotifyActionCameraTargetManager : public UObject {
    GENERATED_BODY()
public:
    USSNotifyActionCameraTargetManager();

    UFUNCTION(BlueprintCallable)
    static ASSNotifyActionCameraTargetActor* SpawnNotifyActionCameraTargetActor(const FSSNotifyActionCameraTargetSpawnParameters& InSpawnParameters, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNotifyActionCameraTargetActorAll();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNotifyActionCameraTargetActor(const FSSNotifyActionCameraTargetSpawnParameters& InSpawnParameters);
    
    UFUNCTION(BlueprintCallable)
    static void Initialize(const TSubclassOf<ASSNotifyActionCameraTargetActor> InActorClass);
    
    UFUNCTION(BlueprintCallable)
    static ASSNotifyActionCameraTargetActor* FindNotifyActionCameraTargetActor(AController* InController, ENewBattleCameraType InBattleCameraType);
    
};

