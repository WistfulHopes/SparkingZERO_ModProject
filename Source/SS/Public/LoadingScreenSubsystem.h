#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "LoadingScreenSubsystem.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class SS_API ULoadingScreenSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LoadingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LoadingWidgetInstance;
    
public:
    ULoadingScreenSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopLoadingScreen(bool bIsEnableWorldRendering);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingScreenAdvanced(const TSoftClassPtr<UUserWidget> InWidget, const TArray<FString> MoviePaths, bool bAllowEngineTick, bool bAutoCompleteWhenLoadingCompletes, bool bMoviesAreSkippable, bool bWaitForManualStop, float MinimumDisplayTime, bool MoviePlaybackLooped);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingScreen(const TSoftClassPtr<UUserWidget> InWidget, const FString& MoviePath, bool MoviePlaybackLooped);
    
    UFUNCTION(BlueprintCallable)
    void DegbugAddViewportWithWidget(UUserWidget* Widget);
    
};

