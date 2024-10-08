#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTimeSliceData.h"
#include "KoratSoundHandle.h"
#include "OnSSDramaticTextCategoryChangedDelegate.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticTextSelectUi.generated.h"

class USSMenuButton;
class USSRemoteButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticTextSelectUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSSDramaticTextCategoryChanged OnCategoryChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SetItemIds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> CategoryFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultWordStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectedBaseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowReplaceWordNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HeaderTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleTimeSliceData NowEditTimeSliceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NowEditTableNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSoundHandle PlayingSoundHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AllTagList;
    
public:
    USSDramaticTextSelectUi();

protected:
    UFUNCTION(BlueprintCallable)
    void PressedCategoryChangeButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void DecidePanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangePanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

