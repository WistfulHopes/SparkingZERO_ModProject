#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditPictureDataList.h"
#include "SSDramaticEditSelectingImageData.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticImageSelectUi.generated.h"

class USSMenuButton;
class USSRemoteButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticImageSelectUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticEditSelectingImageData> NowSelectingImageDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditPictureDataList> EditImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EditDynamicImageCutIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticEditSelectingImageData> EditSetupImageDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SetItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HedderTitleText;
    
public:
    USSDramaticImageSelectUi();

protected:
    UFUNCTION(BlueprintCallable)
    void PressedCategoryChangeButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void DecidePanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangePanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

