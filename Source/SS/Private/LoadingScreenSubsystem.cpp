#include "LoadingScreenSubsystem.h"

ULoadingScreenSubsystem::ULoadingScreenSubsystem() {
    this->LoadingWidgetClass = NULL;
    this->LoadingWidgetInstance = NULL;
}

void ULoadingScreenSubsystem::StopLoadingScreen(bool bIsEnableWorldRendering) {
}

void ULoadingScreenSubsystem::StartLoadingScreenAdvanced(const TSoftClassPtr<UUserWidget> InWidget, const TArray<FString> MoviePaths, bool bAllowEngineTick, bool bAutoCompleteWhenLoadingCompletes, bool bMoviesAreSkippable, bool bWaitForManualStop, float MinimumDisplayTime, bool MoviePlaybackLooped) {
}

void ULoadingScreenSubsystem::StartLoadingScreen(const TSoftClassPtr<UUserWidget> InWidget, const FString& MoviePath, bool MoviePlaybackLooped) {
}

void ULoadingScreenSubsystem::DegbugAddViewportWithWidget(UUserWidget* Widget) {
}


