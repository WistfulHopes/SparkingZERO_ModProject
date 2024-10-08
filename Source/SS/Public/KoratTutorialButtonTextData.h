#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePracticsMenuDataList.h"
#include "KoratTutorialButtonTextData.generated.h"

USTRUCT(BlueprintType)
struct FKoratTutorialButtonTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePracticsMenuDataList PracticeMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GuideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePracticsMenuDataList ClassicPracticeMenuData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ClassicButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClassicGuideText;
    
    SS_API FKoratTutorialButtonTextData();
};

