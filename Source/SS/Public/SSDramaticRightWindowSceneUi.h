#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticSceneListDecideStatus.h"
#include "SSMenuViewScroll.h"
#include "SSDramaticRightWindowSceneUi.generated.h"

class USSMenuButton;
class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticRightWindowSceneUi : public USSMenuViewScroll {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SceneIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEditorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecideNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticSceneListDecideStatus NowDecideStatus;
    
public:
    USSDramaticRightWindowSceneUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SetHitButtonData(USSMenuButton* InHitButton, USSRemoteButton* InRemoteButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectPanel();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideButton(USSMenuButton* InHitButton);
    
};

