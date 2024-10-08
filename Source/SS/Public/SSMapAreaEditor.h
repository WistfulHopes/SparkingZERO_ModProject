#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EAreaEditorUndoActionType.h"
#include "EMapAreaEditType.h"
#include "EWarpPointType.h"
#include "SSAreaEditorEditId.h"
#include "SSWarpRequestInfoDataAsset.h"
#include "SSMapAreaEditor.generated.h"

class AMapAreaEditGuideBox;
class ASSMapAreaEditGuideCylinder;
class ASSMapWarpDataAssetHolder;
class AStaticMeshActor;
class UCheckBox;
class UComboBoxString;
class UObject;
class USSActionCameraDataAsset;
class USSAreaEditPlayerCtrl;
class USSAreaEditorMessage;
class USSAreaEditorUndo;
class USSAreaLimitChecker;
class USSBirdEye;
class USSGroundFitInfoCtrl;
class USSMapAreaEditorPointEditCtrl;
class USSMapAreaEditorResourcePool;
class UTextBlock;

UCLASS(Blueprintable)
class ASSMapAreaEditor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSMapAreaEditGuideCylinder*> GuideCyDirectableAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSMapAreaEditGuideCylinder*> GuideCyAirDirectableAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMapAreaEditGuideBox*> GuideNearWallAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSMapAreaEditGuideCylinder*> GuideWallDirectableAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSMapAreaEditGuideCylinder*> GuideWaterDirectableAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSMapAreaEditGuideCylinder*> GuideSmallDirectableAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMapAreaEditGuideBox*> GuideSafeBoxAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSMapAreaEditGuideCylinder*> GuideSafeCylinderAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMapAreaEditGuideBox*> GuideBoxRemoveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASSMapAreaEditGuideCylinder*> GuideCylinderRemoveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMapAreaEditorPointEditCtrl* PointEditCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAreaEditorUndo* UndoControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSGroundFitInfoCtrl* GroundFitControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBirdEye* BirdEyeControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAreaEditorMessage* EditorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAreaLimitChecker* AreaLimitChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSAreaEditPlayerCtrl* EditorPlayerControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSActionCameraDataAsset* ActionCameraWarpMoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveBoxSafeAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveCylinderSafeAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    USSMapAreaEditorResourcePool* GuideResourcePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* UserEditingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* UserLastEditingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector ViewportCameraPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FRotator ViewportCameraRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsSelectFocusView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsDeselectNonEditable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditNearByWallArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditDirectableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditAirDirectableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditWallDirectableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditWaterDirectableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditSmallDirectableArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditSafeBoxArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEditSafeCylinderArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsSafeAreaDispMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsShowEditAnotherArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsEveryFitGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool IsDrawWireFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DrawClipRate;
    
    ASSMapAreaEditor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ValidUserEditingActor();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerAreaInfo(TArray<UTextBlock*> infoDispFields);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateMapAreaMasterByUserEditing();
    
    UFUNCTION(BlueprintCallable)
    void ToSelfPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ToOtherPlayer();
    
    UFUNCTION(BlueprintCallable)
    void SyncBrowserToObjects(const TArray<FString>& AssetPaths);
    
    UFUNCTION(BlueprintCallable)
    void StartPointEditCtrl(const TArray<UCheckBox*>& targetCheckBoxs, UComboBoxString* selectorWidget, const TArray<UTextBlock*>& posDispBlocks, const TArray<UTextBlock*>& countDispBlocks);
    
    UFUNCTION(BlueprintCallable)
    void StartPointEdit();
    
    UFUNCTION(BlueprintCallable)
    void StartGroundFitCtrl(const TArray<UTextBlock*>& infoDispList);
    
    UFUNCTION(BlueprintCallable)
    void StartAreaEditorMessage(const TArray<UTextBlock*>& messageAreaList);
    
    UFUNCTION(BlueprintCallable)
    void ShowFitDisableDialog();
    
    UFUNCTION(BlueprintCallable)
    void SetupCollectedTraceLocatorSelectItemList(UComboBoxString* SetupWidget, TArray<FText> InNameList);
    
    UFUNCTION(BlueprintCallable)
    void SetupCollectedPlayerStartSelectItemList(UComboBoxString* SetupWidget, TArray<FText> InNameList);
    
    UFUNCTION(BlueprintCallable)
    void SetupCollectedNoramlLocatorSelectItemList(UComboBoxString* SetupWidget, TArray<FText> InNameList);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectedLevelActors(const TArray<AActor*>& ActorsToSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetIsShowEditAnotherAreaFlag(bool IsShow);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditWaterDirectableArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditWallDirectableArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditSmallArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditNearByWallArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditDirectableArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditCylinderSafeArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditBoxSafeArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditArea(EMapAreaEditType MapAreaEditType, bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEditAirDirectableArea(bool IsEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetEveryGroundFitFlag(bool IsSet);
    
    UFUNCTION(BlueprintCallable)
    void SetEditorInvalidInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetDrawWireFrameFlag(bool IsSet);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaLimitDrawFlag(bool InSet);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaDrawClipRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCameraDataAsset(USSActionCameraDataAsset* actionCameraDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void SelectFitResultActor(const FString& hitActorName);
    
    UFUNCTION(BlueprintCallable)
    void SelectEditActor(FSSAreaEditorEditId EditId);
    
    UFUNCTION(BlueprintCallable)
    void SaveAreaDataAsset();
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayers();
    
    UFUNCTION(BlueprintCallable)
    void ResetAfterAreaOverride();
    
    UFUNCTION(BlueprintCallable)
    void RemovePoint(EWarpPointType pointType, const FString& removePointName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMapAreaMaterByUserEdinting();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseUserEditingActor();
    
    UFUNCTION(BlueprintCallable)
    void MoveToUpperGroundPoint(float Offset, int32 tgtDirectionPointUniqId);
    
    UFUNCTION(BlueprintCallable)
    bool IsPossibleChangeAreaSizeSelect();
    
    UFUNCTION(BlueprintCallable)
    bool IsPossibleChangeAreaSizeScale();
    
    UFUNCTION(BlueprintCallable)
    bool IsNearByWallAreaActorAlive(int32 AreaIdx);
    
    UFUNCTION(BlueprintCallable)
    bool IsEffectiveArea(FSSAreaEditorEditId EditId);
    
    UFUNCTION(BlueprintCallable)
    bool IsDirectableAreaActorAlive(int32 AreaIdx);
    
    UFUNCTION(BlueprintCallable)
    bool IsCylinderSafeAreaActorAlive(int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    bool IsBoxSafeAreaActorAlive(int32 AreaId);
    
    UFUNCTION(BlueprintCallable)
    bool IsAirDirectableAreaActorAlive(int32 AreaIdx);
    
    UFUNCTION(BlueprintCallable)
    void InitPointLists();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWaterDirectableAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWallDirectableAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    ASSMapAreaEditGuideCylinder* GetUserEditingActorCy();
    
    UFUNCTION(BlueprintCallable)
    AMapAreaEditGuideBox* GetUserEditingActor();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSmallAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    FString GetSavedFilePath();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSafeAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNearByWallAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetMasterCollectedTracesLocatorNameList();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetMasterCollectedTraceLocatorList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetMasterCollectedPlayerStartNameList();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetMasterCollectedPlayerStartList();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetMasterCollectedNormalLocatorNameList();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetMasterCollectedNormalLocatorList();
    
    UFUNCTION(BlueprintCallable)
    ASSMapWarpDataAssetHolder* GetMapWarpDataAssetHolder();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMapAreaEditTypeEntryNum(EMapAreaEditType InMapAreaEditType);
    
    UFUNCTION(BlueprintCallable)
    EMapAreaEditType GetMapAreaEditType(int32 InAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsEditArea(EMapAreaEditType MapAreaEditType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetGuideEntryCount();
    
    UFUNCTION(BlueprintCallable)
    FVector GetFieldSize();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDirectableaAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetAreaSizeSelect();
    
    UFUNCTION(BlueprintCallable)
    FVector GetAreaSizeScale();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSSAreaEditorEditId> GetAllAreaEditIdList(EMapAreaEditType MapAreaEditType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAirDirectableAreaEntryNum();
    
    UFUNCTION(BlueprintCallable)
    bool FitAddNewAreaUp(int32 InNewAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FitAddNewAreaRight(int32 InNewAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FitAddNewAreaLeft(int32 InNewAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FitAddNewAreaFront(int32 InNewAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FitAddNewAreaDown(int32 InNewAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FitAddNewAreaBack(int32 InNewAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    void execUndo(EAreaEditorUndoActionType undoType);
    
    UFUNCTION(BlueprintCallable)
    void EvalWallDirectableArea(int32 limitNum);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateEditArea();
    
    UFUNCTION(BlueprintCallable)
    void DrawPlayersIntoEditingArea();
    
    UFUNCTION(BlueprintCallable)
    void DebugWarpRequestSequenceEvent(bool InReturn, bool InLoop);
    
    UFUNCTION(BlueprintCallable)
    void DebugWarpRequest(FSSWarpRequestInfoDataAsset InWarpRequestInfoDataAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugTestDrawAutoWallNear(const UObject* WorldContextObject, FVector centerPos, float AreaXY, float AreaZ, int32 OctDepth, float Time, float Tickness, bool bWithSearchArea, int32 drawRangeType);
    
    UFUNCTION(BlueprintCallable)
    void CreateNewPoint(EWarpPointType pointType, const FString& newPointName);
    
    UFUNCTION(BlueprintCallable)
    bool CreateNewAreaInstance(ASSMapWarpDataAssetHolder* MapWarpDataAssetHolder, int32 areaTypeIndex, FVector centerPos);
    
    UFUNCTION(BlueprintCallable)
    bool CreateNewArea(int32 InAreaTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> CreateActorNameList(const TArray<AActor*>& InCheckList);
    
    UFUNCTION(BlueprintCallable)
    void CloseEditor();
    
    UFUNCTION(BlueprintCallable)
    void CleanupGuides();
    
    UFUNCTION(BlueprintCallable)
    void ClaenupAfterGuideActors(bool withDialog);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckContainSurfaceType(const AStaticMeshActor* StaticMeshActor, TEnumAsByte<EPhysicalSurface> SurfaceType);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAdoveLandscapeHeightThreshold(const AStaticMeshActor* StaticMeshActor, float heightThreshold);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOceanPlaneActorDisp(bool isDisp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMarginDisp(bool isDisp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeEffectActorDisp(bool isDisp);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBirdEyeMode(bool IsSet);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAreaSizeSelect(bool isLarge);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAreaSizeScale(FVector Scale);
    
    UFUNCTION(BlueprintCallable)
    void ChangeActiveEditPointCategory(UCheckBox* operatedWidget);
    
    UFUNCTION(BlueprintCallable)
    void CameraMoveToUserEditingActor();
    
    UFUNCTION(BlueprintCallable)
    void AttachEditedPointToSaveData();
    
    UFUNCTION(BlueprintCallable)
    void AfterCreateNewAreasFitGround();
    
    UFUNCTION(BlueprintCallable)
    void AdjustAllAirDirectablePoint();
    
};

