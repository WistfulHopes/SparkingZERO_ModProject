#pragma once
#include "CoreMinimal.h"
#include "SSUiWidget.h"
#include "SSEventSceneDecisionBranchVision.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class USSEventSceneDecisionBranchVision : public USSUiWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    USSEventSceneDecisionBranchVision();

};

