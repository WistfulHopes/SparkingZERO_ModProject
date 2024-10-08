#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleTipsCategoryType.h"
#include "MutualDataAsset.h"
#include "SSDramaticBattleTipsData.h"
#include "SSDramaticBattleTipsDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API USSDramaticBattleTipsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSDramaticBattleTipsCategoryType TipsCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TipsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEverytime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDramaticBattleTipsData> TipsPageData;
    
    USSDramaticBattleTipsDataAsset();

};

