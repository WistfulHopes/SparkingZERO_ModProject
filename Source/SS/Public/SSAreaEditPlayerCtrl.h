#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSAreaEditPlayerCtrl.generated.h"

class AActor;
class ASSCharacter;
class USSActionCameraDataAsset;
class UWorld;

UCLASS(Blueprintable)
class USSAreaEditPlayerCtrl : public UObject {
    GENERATED_BODY()
public:
    USSAreaEditPlayerCtrl();

    UFUNCTION(BlueprintCallable)
    void ToSelf(UWorld* World, int32 selfId, USSActionCameraDataAsset* cameraAsset);
    
    UFUNCTION(BlueprintCallable)
    void ToOther(UWorld* World, int32 selfId, USSActionCameraDataAsset* cameraAsset);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayers(UWorld* World, const TArray<AActor*>& pointList, USSActionCameraDataAsset* cameraAsset);
    
    UFUNCTION(BlueprintCallable)
    bool GetControlPlayers(UWorld* World, ASSCharacter*& OutPlayer, ASSCharacter*& OutTarget);
    
};

