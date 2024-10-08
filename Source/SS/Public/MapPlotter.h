#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SSLayeredBoxSafeArea.h"
#include "SSLayeredCylinderSafeArea.h"
#include "SSWarpTargetAreaSet.h"
#include "MapPlotter.generated.h"

class ASSMapWarpDataAssetHolder;
class USSMapWarpAreaDataAsset;
class UWorld;

UCLASS(Blueprintable)
class SS_API UMapPlotter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWarpTargetAreaSet WarpAreaSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSamplingFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSMapWarpDataAssetHolder* ParentHolder;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerStartToCommonAreaDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableSetupRay;
    
    UMapPlotter();

    UFUNCTION(BlueprintCallable)
    void Show(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void Setup(ASSMapWarpDataAssetHolder* InAreaHolder, bool bIsIgnoreDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSamplingFinish(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSetupRay(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    bool RecreateAreaDataAsset(USSMapWarpAreaDataAsset*& CreateWork);
    
    UFUNCTION(BlueprintCallable)
    int32 MakeSafeAreaId();
    
    UFUNCTION(BlueprintCallable)
    FSSWarpTargetAreaSet GetWarpAreaSet();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalSafeAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSamplingFinish();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCylinderSafeAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBoxSafeAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSLayeredCylinderSafeArea> GetAllCylinderSafeAreaList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSLayeredBoxSafeArea> GetAllBoxSafeAreaList();
    
    UFUNCTION(BlueprintCallable)
    void FixInternalAreaDatas();
    
    UFUNCTION(BlueprintCallable)
    bool CreateWaterDirectableArea(const FVector& centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateWallDirectableArea(const FVector& centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSmallDirectableArea(const FVector& centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateNearByWallArea(const FVector& centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateLayeredCylinderSafeArea(const FVector& centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateLayeredBoxSafeArea(const FVector& centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateDirectableArea(const FVector& centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateAirDirectableArea(const FVector& centerPos);
    
private:
    UFUNCTION(BlueprintCallable)
    bool AreaSetupWithAreaData(const USSMapWarpAreaDataAsset* InAreaData);
    
};

