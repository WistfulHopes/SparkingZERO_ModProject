#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleCommonListData.h"
#include "SSMenuManager.h"
#include "SSDramaticBattleDataDisplayUi.generated.h"

class USSDramaticBattleDataRecordAsset;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleDataDisplayUi : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClearRateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClearCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotPlayedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* DisplayBattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleCommonListData CommonBattleListData;
    
public:
    USSDramaticBattleDataDisplayUi();

protected:
    UFUNCTION()
    void OnWLibDataUpdate(bool bIsClear, const TArray<uint64>& InBattleId);
    
};

