#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDRMEditSituationDataList.h"
#include "SSDramaticEditSelectingImageData.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticBattleCutEditorInitialSelectImageSelectUi2D.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleCutEditorInitialSelectImageSelectUi2D : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticEditSelectingImageData> NowSelectingImageDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditPictureDataList> EditImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditSituationDataList> EditSituations;
    
public:
    USSDramaticBattleCutEditorInitialSelectImageSelectUi2D();

protected:
    UFUNCTION(BlueprintCallable)
    void DecidePanel(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void ChangePanelData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
};

