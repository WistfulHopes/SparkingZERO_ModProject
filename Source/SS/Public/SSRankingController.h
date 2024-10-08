#pragma once
#include "CoreMinimal.h"
#include "SSMenuSceneController.h"
#include "SSRankingController.generated.h"

class ASSCutCameraActor;
class ASSPlayerCardControllerActor;
class USSMenuDialogManager;
class USSOperationGuideSet;
class USSRankingCharacterList;
class USSRankingList;
class USSRankingNetworkManager;
class USSSortFilterDialog;
class USSUiWidget;

UCLASS(Blueprintable)
class ASSRankingController : public ASSMenuSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* ManualCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* BackgroundWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSRankingList* LeaderBoardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* CategoryTabWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSRankingCharacterList* CharacterListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterDialog* FilterWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSUiWidget* RankTypeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMenuDialogManager* DialogManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRankingNetworkManager* NetworkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSPlayerCardControllerActor* PlayerCardActor;
    
public:
    ASSRankingController(const FObjectInitializer& ObjectInitializer);

};

