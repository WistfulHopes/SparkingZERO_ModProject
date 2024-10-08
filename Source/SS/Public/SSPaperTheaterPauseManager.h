#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSPaperTheaterPauseManager.generated.h"

class USSEventScenePauseManager;

UCLASS(Blueprintable)
class USSPaperTheaterPauseManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSEventScenePauseManager* MenuManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    USSPaperTheaterPauseManager();

    UFUNCTION(BlueprintCallable)
    void UnPause();
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    bool IsInputDecided();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinished();
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void Finalize();
    
};

