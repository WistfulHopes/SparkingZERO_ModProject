#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticEditBaseText.h"
#include "KoratDramaticEditReplaceWord.h"
#include "MutualDataAsset.h"
#include "SSDramaticEditReplaceWordAsset.generated.h"

UCLASS(Blueprintable)
class USSDramaticEditReplaceWordAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticEditBaseText> SummaryBaseTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticEditBaseText> TitleBaseTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticEditReplaceWord> ReplaceWord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EditTextForCreateNew;
    
    USSDramaticEditReplaceWordAsset();

};

