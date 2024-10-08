#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditWordTextDataList.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionSubtitleReplaceWord.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleReplaceWord;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleReplaceWord : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FilterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FilterIndexFluctuationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditWordTextDataList SelectListValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectListValueFilterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditWordTextDataList> SelectListDataLists;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleReplaceWord();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleReplaceWord* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

