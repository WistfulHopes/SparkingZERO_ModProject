#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSDragonAdventureIFSceneController.h"
#include "SSDragonAdventureIFChartController.generated.h"

class AActor;
class ASSDragonAdventureIFCTEventIcon;
class ASSDragonAdventureIFCTIslandManager;
class ASSDragonAdventureIFCTRootInfo;
class ASSDragonAdventureIFChartCameraManager;
class ASSDragonAdventureIFChartSelecterByPad;
class ASSLevelSequenceActor;
class ULevelStreamingDynamic;
class USSDragonAdventureIFCTChapterCutInManager;
class USSDragonAdventureIFCTCharaCutInManager;
class USSDragonAdventureIFCTEpisodeResultManager;
class USSDragonAdventureIFCTEventDetailsManager;
class USSDragonAdventureIFCTEventTitleManager;
class USSDragonAdventureIFCTMapCharaSelectManager;
class USSDragonAdventureIFCTMapManager;
class USSDragonAdventureIFCTMapOutlineManager;
class USSDragonAdventureIFCTOrbCountManager;
class USSMenuGeneralDialog;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSDragonAdventureIFChartController : public ASSDragonAdventureIFSceneController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFChartSelecterByPad* SelecterByPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFChartCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTEventTitleManager* EventTitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTEventDetailsManager* EventDetailsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTMapManager* StoryMapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTOrbCountManager* OrbCountWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTEpisodeResultManager* EpisodeResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTCharaCutInManager* EpisodeResultCharaCutInWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTChapterCutInManager* EpisodeResultChapterCutInWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTMapOutlineManager* MapOutlineWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDragonAdventureIFCTMapCharaSelectManager* MapCharaSelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFCTRootInfo* RootInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFCTEventIcon* EventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSDragonAdventureIFCTIslandManager* Island;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSLevelSequenceActor* DirectingSeqActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingDynamic*> SubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor StartFadeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DirectingActor;
    
public:
    ASSDragonAdventureIFChartController(const FObjectInitializer& ObjectInitializer);

};

