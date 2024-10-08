#pragma once
#include "CoreMinimal.h"
#include "EKoratMenuDramaticMode.h"
#include "KoratDramaticBattleExtraDataList.h"
#include "SSDramaticBattleListUIBase.h"
#include "SSDramaticBattleListUI.generated.h"

class UOverlay;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticBattleListUI : public USSDramaticBattleListUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCreateNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UnsettingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratMenuDramaticMode NowDisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetCopyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOverlay> CategoryOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleExtraDataList> NowDispUnlockExtraBattles;
    
public:
    USSDramaticBattleListUI();

};

