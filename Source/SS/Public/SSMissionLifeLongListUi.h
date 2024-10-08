#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSMenuMissionListUI.h"
#include "SSMissionUserDataSaveData.h"
#include "SSMissionLifeLongListUi.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMissionLifeLongListUi : public USSMenuMissionListUI {
    GENERATED_BODY()
public:
    USSMissionLifeLongListUi();

private:
    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayStampAnim(int32 InNumber);
    
    UFUNCTION(BlueprintCallable)
    void NotShowMissionPartsHideLifeLong();
    
    UFUNCTION(BlueprintCallable)
    void MissionStamped(FKoratMissionDataList& InMissionId, FSSMissionUserDataSaveData& InUserData);
    
};

