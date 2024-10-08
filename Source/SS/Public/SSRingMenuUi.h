#pragma once
#include "CoreMinimal.h"
#include "KoratRingMenuDataArray.h"
#include "SSMenuManager.h"
#include "SSRingMenuUi.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSRingMenuUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* CommandNameTxt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* CommandDiscriptionTxt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRingMenuDataArray RingMenuData;
    
public:
    USSRingMenuUi();

};

