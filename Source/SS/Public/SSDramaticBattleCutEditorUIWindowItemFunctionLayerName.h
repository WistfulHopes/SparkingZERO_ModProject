#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditLayerDataList.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionLayerName.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionLayerName;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionLayerName : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditLayerDataList FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionLayerName();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionLayerName* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

