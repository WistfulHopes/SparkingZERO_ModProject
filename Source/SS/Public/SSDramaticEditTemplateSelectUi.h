#pragma once
#include "CoreMinimal.h"
#include "EKoratTemplateSelecterAnimButton.h"
#include "SSMenuManager.h"
#include "SSDramaticEditTemplateSelectUi.generated.h"

class UImage;
class USSMenuButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEditTemplateSelectUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TemplateImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TemplateExplaneTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemplateImageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemplateExplaneTextBlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommonMessageTextBlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TemplateNameButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* TemplateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* LeftArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* RightArrowButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTemplateSelecterAnimButton AnimButton;
    
public:
    USSDramaticEditTemplateSelectUi();

protected:
    UFUNCTION(BlueprintCallable)
    void OnDecideTemplateBattle();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDecideRightShift();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideLeftShift();
    
};

