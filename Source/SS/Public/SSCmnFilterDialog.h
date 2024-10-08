#pragma once
#include "CoreMinimal.h"
#include "EKoratSortType.h"
#include "SSMenuManager.h"
#include "SSCmnFilterDialog.generated.h"

class USSMenuButton;
class USSRemoteButton;
class USSSortFilterList;

UCLASS(Blueprintable, EditInlineNew)
class USSCmnFilterDialog : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSSortFilterList> ClassSortWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USSSortFilterList> ClassFilterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftPageChangeButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightPageChangeButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PageTitleTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterHitCountTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ErrorTextWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResetButtonWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SortListButtonValueTextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FilterListButtonSelectSwitcherName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SortListButtonSelectSwitcherName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SortPageTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FilterPageTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ResetButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratSortType, FText> SortTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDetailInfoDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNaviButtonsDisp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterList* SortWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterList* FilterWidget;
    
public:
    USSCmnFilterDialog();

private:
    UFUNCTION(BlueprintCallable)
    void ResetButtonDecided(USSMenuButton* InHitButton);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseFailed();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangePageButtonDecided(USSMenuButton* InHitButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaSortListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaSortListButtonContents(USSMenuButton* InHitButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaSortListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaFilterListButtonDecided(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCharaFilterListButton(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

