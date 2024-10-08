#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDramaticWLibReplaySelect.generated.h"

class USSDramaticReplayInfo;
class USSDramaticReplayListUI;
class USSDramaticReplayListWindow;
class USSMenuGeneralDialog;
class USSOperationGuideSet;
class USSSortFilterDialog;

UCLASS(Blueprintable)
class ASSDramaticWLibReplaySelect : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticReplayListWindow* ReplayListWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticReplayListUI* ReplayListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticReplayInfo* ReplayInfoWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticReplayInfo* ReplayInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSSortFilterDialog* SortFilterDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuGeneralDialog* MenuGeneralDialog;
    
public:
    ASSDramaticWLibReplaySelect(const FObjectInitializer& ObjectInitializer);

};

