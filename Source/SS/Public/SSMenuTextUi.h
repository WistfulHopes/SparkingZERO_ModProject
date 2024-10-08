#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMenuTextUi.generated.h"

class UOverlay;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSMenuTextUi : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* CharaNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* ContextText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* NextText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* ButtonGuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* ToNextOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UOverlay* NameBoxOverlay;
    
public:
    USSMenuTextUi();

};

