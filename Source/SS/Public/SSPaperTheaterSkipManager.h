#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "SSPaperTheaterSkipManager.generated.h"

class USSMenuButton;
class USSMenuButtonHold;
class USSMenuManager;

UCLASS(Blueprintable)
class USSPaperTheaterSkipManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuManager* MenuManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButtonHold* MenuButtonHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatusTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> IgnoreShowKeys;
    
public:
    USSPaperTheaterSkipManager();

    UFUNCTION(BlueprintCallable)
    void UnPause();
    
    UFUNCTION(BlueprintCallable)
    void Tick(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ShowWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSkipButtonHoldProgressDisp(USSMenuButton* InButton, float InProgress);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsInputDecided();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(float InHideReleaseTime);
    
    UFUNCTION(BlueprintCallable)
    void HideWidget();
    
    UFUNCTION(BlueprintCallable)
    bool GetInputEnable();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

