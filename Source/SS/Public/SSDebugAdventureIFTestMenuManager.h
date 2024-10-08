#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFEventDataType.h"
#include "SSDebugAdventureIFTestEventListByRoutePartInfo.h"
#include "SSMenuManager.h"
#include "SSDebugAdventureIFTestMenuManager.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSDebugAdventureIFTestMenuManager : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnregisteredToEventBlockText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoEventDataText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RoutePartSelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSSDebugAdventureIFTestEventListByRoutePartInfo> EventListByRoutePart;
    
public:
    USSDebugAdventureIFTestMenuManager();

protected:
    UFUNCTION(BlueprintCallable)
    void StartAging(const FText& InSelectedCharacter, const FText& InSelectedEvent);
    
    UFUNCTION(BlueprintCallable)
    bool SetupSelectedEvent(const FText& InSelectedCharacter, const FText& InSelectedEvent, bool bInEventRepeat, ESSDragonAdventureIFEventDataType& OutEventType);
    
    UFUNCTION(BlueprintCallable)
    void SetupGoBack(const FText& InSelectedCharacter, const FText& InSelectedEvent, bool bInEventRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAgingFirstPersonCamera(bool InFirstPersonCamera) const;
    
    UFUNCTION(BlueprintCallable)
    void SaveSetting(const FText& InSelectedCharacter, const FText& InSelectedEvent, bool bInEventRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAgingFirstPersonCamera() const;
    
public:
    UFUNCTION(BlueprintCallable)
    static void GoToDebugAdventureIFTest(const bool bInIsAlwaysGo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetSelectedEventDisplayInfomation(const FText& InSelectedCharacter, const FText& InSelectedEvent, FText& OutRouteName, FText& OutChapterName, FText& OutTitle, FText& OutRouteTitle, FText& OutExplanation, FText& OutEventBlockName, FText& OutEventNumberPerTotal, FText& OutEventDataName);
    
    UFUNCTION(BlueprintCallable)
    void GetEventSelectParameter(const FText& InSelectedCharacter, bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEventRepeatSelectParameter() const;
    
    UFUNCTION(BlueprintCallable)
    void GetCharacterSelectParameter(bool bInUseSaveSetting, TArray<FText>& OutItems, FText& OutCurrentItem);
    
    UFUNCTION(BlueprintCallable)
    void ChangeToPrevPart(const FText& InSelectedEvent, TArray<FText>& OutEventItems, FText& OutCurrentEventItem);
    
    UFUNCTION(BlueprintCallable)
    void ChangeToNextPart(const FText& InSelectedEvent, TArray<FText>& OutEventItems, FText& OutCurrentEventItem);
    
};

