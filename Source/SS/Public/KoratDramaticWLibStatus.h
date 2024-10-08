#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSWLibBattleSortType.h"
#include "ESSWLibHomeCategoryButtonType.h"
#include "ESSWLibHomePeriodCategoryButtonType.h"
#include "ESSWLibReplayFilterType.h"
#include "ESSWLibReplaySortType.h"
#include "ESSWLibSideButtonType.h"
#include "KoratDRMEditWordTextDataList.h"
#include "KoratDramaticBattleDetailSearchParam.h"
#include "KoratDramaticWLibStatus.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticWLibStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleDetailSearchParam DetailSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditWordTextDataList> TagSearchWords;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 IdSearchBattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWLibBattleSortType BattleSort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWLibReplaySortType ReplaySort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWLibReplayFilterType ReplayFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWLibHomeCategoryButtonType TopCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWLibHomePeriodCategoryButtonType PeriodCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWLibSideButtonType SideButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FollowBattleListUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserBattleListUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserReplayListUserId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 BattleReplayListBattleId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 BattleDetailStartBattleId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 InitialFocusBattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ReplaySelectReplayId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid InitialFocusReplayId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    SS_API FKoratDramaticWLibStatus();
};

