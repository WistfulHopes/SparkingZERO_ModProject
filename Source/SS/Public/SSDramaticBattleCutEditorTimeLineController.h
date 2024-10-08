#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "SSDramaticBattleCutEditorUIBase.h"
#include "SSDramaticBattleCutEditorUISetupParameter.h"
#include "SSDramaticBattleCutEditorTimeLineController.generated.h"

class USSDramaticBattleCutEditorGuideManager;
class USSDramaticTimeLineUi;

UCLASS(Blueprintable)
class ASSDramaticBattleCutEditorTimeLineController : public AActor, public ISSDramaticBattleCutEditorUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TimeLineUIDrawPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticTimeLineUi* TimeLineUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TrackIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> KeyIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleCutEditorGuideManager* GuideManager;
    
public:
    ASSDramaticBattleCutEditorTimeLineController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void Setup(const FSSDramaticBattleCutEditorUISetupParameter& InParameter) override PURE_VIRTUAL(Setup,);
    
    UFUNCTION()
    void Initialize() override PURE_VIRTUAL(Initialize,);
    
    UFUNCTION()
    ESSDramaticBattleCutEditorUIType GetUIType() override PURE_VIRTUAL(GetUIType, return ESSDramaticBattleCutEditorUIType::None;);
    
    UFUNCTION()
    void Finalize() override PURE_VIRTUAL(Finalize,);
    
};

