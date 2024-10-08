#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditButtonMode.h"
#include "EKoratMenuDramaticMode.h"
#include "SSMenuManager.h"
#include "SSDramaticSideModeButtonSet.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticSideModeButtonSet : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticEditButtonMode EditMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* ExtraButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* EditButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* EditNotPostedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* EditPostedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticEditButtonMode EditDefaultMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSMenuButton* PlayAnimButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratMenuDramaticMode FocusDramaticMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticEditButtonMode FocusEditMode;
    
public:
    USSDramaticSideModeButtonSet();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdateFocus(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideEditModeButton(USSMenuButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void OnDecideDramaticModeButton(USSMenuButton* InButton);
    
};

