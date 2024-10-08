#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorCutType.h"
#include "SSMenuManager.h"
#include "SSDebugCutEditorTestMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDebugCutEditorTestMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDramaticBattleCutEditorCutType, FString> CutTypeNames;
    
public:
    USSDebugCutEditorTestMenuManager();

protected:
    UFUNCTION(BlueprintCallable)
    bool SetupStart(const FText& InSelectedStage, const TArray<FText>& InSelectedCharacters, const TArray<FText>& InSelectedCharacterStarts, const FText& InSelectedCutType);
    
    UFUNCTION(BlueprintCallable)
    void SetupGoBack(const FText& InSelectedStage, const TArray<FText>& InSelectedCharacters, const TArray<FText>& InSelectedCharacterStarts, const FText& InSelectedCutType);
    
    UFUNCTION(BlueprintCallable)
    void SaveSetting(const FText& InSelectedStage, const TArray<FText>& InSelectedCharacters, const TArray<FText>& InSelectedCharacterStarts, const FText& InSelectedCutType);
    
public:
    UFUNCTION(BlueprintCallable)
    static void GoToDebugCutEditorTest(const bool bInIsAlwaysGo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetStageSelectParameter(bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem);
    
    UFUNCTION(BlueprintCallable)
    void GetCutTypeSelectParameter(bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterStartSelectParameter(bool bInUseSaveSetting, int32 InCharacterStartIndex, TArray<FText>& OutItems, FText& OutCurrentItem);
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterSelectParameter(bool bInUseSaveSetting, int32 InCharacterIndex, TArray<FText>& OutItems, FText& OutCurrentItem);
    
};

