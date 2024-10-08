#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "EWarpRequestType.h"
#include "KoratBattlePlayMap.h"
#include "KoratMapDataList.h"
#include "SSLayeredBoxSafeArea.h"
#include "SSLayeredCylinderSafeArea.h"
#include "SSWarpDirectablePoint.h"
#include "SSWarpNearByWallArea.h"
#include "SSWarpPoint.h"
#include "SSWarpTargetAreaSet.h"
#include "SSMapWarpDataAssetHolder.generated.h"

class AMapAreaEditGuideBox;
class APlayerStart;
class ASSCharacter;
class ASSCharacterWarpCtrl;
class ASSMapAreaEditGuideCylinder;
class ASSTraceLocator;
class UMapPlotter;
class USSMapWarpAreaDataAsset;

UCLASS(Blueprintable)
class SS_API ASSMapWarpDataAssetHolder : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> playerStartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> normalLocatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> traceLocatorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OtherSpacePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AreaLimitWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AreaLimitCeil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OceanPlaneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPermitWarpSystemCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInBattleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapPlotter* MapPlotter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList CurrentMapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap CurrentBattleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    USSMapWarpAreaDataAsset* WarpAreaAssetInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavedAssetFileName;
    
public:
    ASSMapWarpDataAssetHolder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryLoadAreaData();
    
    UFUNCTION(BlueprintCallable)
    void SetSavedFileName(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable)
    void SetPlotterEnableSetupRay(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectedTraceLocatorListByEditData(TArray<AActor*> edittedPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectedPlayerStartListByEditData(TArray<AActor*> edittedPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectedNormalLocatorListByEditData(TArray<AActor*> edittedPoints);
    
    UFUNCTION(BlueprintCallable)
    bool SearchDirectableAreaPoint(const FTransform& InTransform, FTransform& OutResultTransform, const EWarpRequestType InWarpRequestType, const bool InTargetAir, const bool InTargetWater, const ASSCharacter* InCharacter, const ASSCharacter* InTargetCharacter, const int32 InShuffle);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveWaterDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveWallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSmallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveNearByWallAreaByUserEdit(AMapAreaEditGuideBox* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCylinderSafeAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBoxSafeAreaByUserEdit(AMapAreaEditGuideBox* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAirDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool RecreateAreaDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void PlotterHardResetP();
    
    UFUNCTION(BlueprintCallable)
    bool PickupGroundHit(TArray<FHitResult>& CandidateList, FHitResult& InResultWork);
    
    UFUNCTION(BlueprintCallable)
    bool LoadMapAreaData(const FString& InMapName);
    
    UFUNCTION(BlueprintCallable)
    bool IsSafeArea(FVector InCheckPos, ASSCharacter* InCharacter, EWarpRequestType InWarpRequestType, bool InCharacterInAir);
    
    UFUNCTION(BlueprintCallable)
    bool IsOceanPlaneActor(AActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<FHitResult> IsNearByWallSizedP(FTransform InTransform, float checkRadius, float checkHeight, float startOfs, float endOfs, float borderSize);
    
    UFUNCTION(BlueprintCallable)
    bool IsNearByWall(FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    bool IsLandscapeActor(AActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsHitUpperObject(TArray<FHitResult> InCheckHits);
    
    UFUNCTION(BlueprintCallable)
    bool IsFieldLimitActor(AActor* checkActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsCharacterNearByWall(ASSCharacter* InCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsAreaSetupReady();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetWaterDirectablePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas);
    
    UFUNCTION(BlueprintCallable)
    int32 GetWaterDirectableAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    FSSWarpTargetAreaSet GetWarpAreaSet();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWallDirectableAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetWallDirctblePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas);
    
    UFUNCTION(BlueprintCallable)
    bool GetSmallDirectablePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSmallAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    FString GetSavedFileName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSafeCylinderAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSafeBoxAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSafeAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    FSSLayeredCylinderSafeArea GetPlotterCylinderSafeAreaById(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    FSSLayeredBoxSafeArea GetPlotterBoxSafeAreaById(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerIndex(const ASSCharacter* InTargetCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool GetOtherSpacePositionDirect(const FTransform& InTransform, FTransform& OutResultTransform);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetOceanPlaneActor();
    
    UFUNCTION(BlueprintCallable)
    bool GetNearByWallWithAreaCheck(FTransform Transform, TArray<FSSWarpNearByWallArea>& OutAreas);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNearByWallAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    APlayerStart* GetInfieldPlayerStart(FName InName);
    
    UFUNCTION(BlueprintCallable)
    ASSTraceLocator* GetInfieldLocator(FName InName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDirectableaAreaNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetDirctblePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas, bool isLarge);
    
    UFUNCTION(BlueprintCallable)
    bool GetCylinderSafeAreaWithAreaCheck(FTransform Transform, TArray<FSSLayeredCylinderSafeArea>& OutAreas);
    
    UFUNCTION(BlueprintCallable)
    FKoratMapDataList GetCurrentMapList();
    
    UFUNCTION(BlueprintCallable)
    FKoratBattlePlayMap GetCurrentBattleMap();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetCollectedTraceLocatorList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCollectedPlayerStartNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetCollectedPlayerStartList();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCollectedPlayerStartByIndex(int32 InIdx);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetCollectedNormalLocatorList();
    
    UFUNCTION(BlueprintCallable)
    ASSCharacterWarpCtrl* GetCharacterWarpCtrl();
    
    UFUNCTION(BlueprintCallable)
    float GetCharacterHeightOffset(const ASSCharacter* InCharacter);
    
    UFUNCTION(BlueprintCallable)
    float GetCeilHeight();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCeilActor();
    
    UFUNCTION(BlueprintCallable)
    bool GetBoxSafeAreaWithAreaCheck(FTransform Transform, TArray<FSSLayeredBoxSafeArea>& OutAreas);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAreaWallActors();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSLayeredCylinderSafeArea> GetAllCylinderSafeAreaList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSLayeredBoxSafeArea> GetAllBoxSafeAreaList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAirDirectableaAreaNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetAirDirctblePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas, bool isLarge);
    
    UFUNCTION(BlueprintCallable)
    USSMapWarpAreaDataAsset* GetActiveAreaDataAsset();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSWarpPoint> CreateSaveAssetPointDatas(TArray<FSSWarpPoint>& OutCreatedPointDatas);
    
    UFUNCTION(BlueprintCallable)
    void CollectReferencePoints();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeWaterDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeWallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSmallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeNearByWallAreaByUserEdit(AMapAreaEditGuideBox* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeCyliinderSafeAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeBoxSafeAreaByUserEdit(AMapAreaEditGuideBox* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAirDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewWaterDirectableArea(FVector createPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewWallDirectableArea(FVector createPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewSmallDirectableArea(FVector createPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewNearByWallArea(FVector createPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewLayeredCylinderSafeArea(FVector createPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewLayeredBoxSafeArea(FVector createPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewDirectableArea(FVector createPosition);
    
    UFUNCTION(BlueprintCallable)
    bool AddNewAirDirectableArea(FVector createPosition);
    
};

