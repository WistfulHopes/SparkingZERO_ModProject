#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSDramaticDetailsController.generated.h"

class USSDramaticDirectionEditUi;
class USSDramaticDirectionTriggerList;
class USSDramaticDirectionWindow;
class USSDramaticSpcialEndSettingUi;
class USSOperationGuideSet;

UCLASS(Blueprintable)
class ASSDramaticDetailsController : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticDirectionEditUi* DramaticEditDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticDirectionWindow* DramaticEditDirectionWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticDirectionTriggerList* DramaticDirectionTriggerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSDramaticSpcialEndSettingUi* DramaticSpecialEndingEditUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSOperationGuideSet* GuideWidget;
    
public:
    ASSDramaticDetailsController(const FObjectInitializer& ObjectInitializer);

};

