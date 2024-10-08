#pragma once
#include "CoreMinimal.h"
#include "EKoratResetMode.h"
#include "EKoratRestartMode.h"
#include "ESSContainerSubLevelVisibleMode.h"
#include "ESSMapLoadType.h"
#include "KoratMapDataList.h"
#include "KoratMapStreamingPoolSizeData.h"
#include "KoratUILevelCancelWidget.h"
#include "KoratUILevelTransition.h"
#include "KoratUILevelDataAssetRecord.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FKoratUILevelDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> PersistentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratResetMode ResetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnBattleCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnMapCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnChameleonForController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SubLevelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> ContainerSubLevelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSContainerSubLevelVisibleMode ContainerSubLevelVisibleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratRestartMode RestartMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList MapDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMapLoadType MapLoadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratUILevelTransition> Transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratUILevelCancelWidget> CancelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMapStreamingPoolSizeData> StreamingPoolSizeData;
    
    SS_API FKoratUILevelDataAssetRecord();
};

