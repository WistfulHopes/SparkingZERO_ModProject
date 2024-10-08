#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditFacialDataList.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionFacial.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionFacial;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionFacial : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditFacialDataList FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionFacial();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionFacial* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

