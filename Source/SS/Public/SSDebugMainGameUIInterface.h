#pragma once
#include "CoreMinimal.h"
#include "SSDebugMenuOpenedBP.h"
#include "SSDebugMainGameUIInterface.generated.h"

class APlayerController;
class USSDebugMainGameUIExecute;

UCLASS(Blueprintable)
class USSDebugMainGameUIInterface : public USSDebugMenuOpenedBP {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSDebugMainGameUIExecute* ExecuteInstancePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaySide;
    
public:
    USSDebugMainGameUIInterface();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlaySide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USSDebugMainGameUIExecute> GetExecuteInstancePtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallTick(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallSetCommonExecutePtr();
    
};

