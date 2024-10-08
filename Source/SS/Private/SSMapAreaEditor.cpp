#include "SSMapAreaEditor.h"

ASSMapAreaEditor::ASSMapAreaEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PointEditCtrl = NULL;
    this->UndoControl = NULL;
    this->GroundFitControl = NULL;
    this->BirdEyeControl = NULL;
    this->EditorMessage = NULL;
    this->AreaLimitChecker = NULL;
    this->EditorPlayerControl = NULL;
    this->ActionCameraWarpMoveStart = NULL;
    this->GuideResourcePool = NULL;
    this->UserEditingActor = NULL;
    this->UserLastEditingActor = NULL;
    this->IsSelectFocusView = true;
    this->IsDeselectNonEditable = true;
    this->IsEditNearByWallArea = false;
    this->IsEditDirectableArea = false;
    this->IsEditAirDirectableArea = false;
    this->IsEditWallDirectableArea = false;
    this->IsEditWaterDirectableArea = false;
    this->IsEditSmallDirectableArea = false;
    this->IsEditSafeBoxArea = false;
    this->IsEditSafeCylinderArea = false;
    this->IsSafeAreaDispMargin = true;
    this->IsShowEditAnotherArea = true;
    this->IsEveryFitGround = false;
    this->IsDrawWireFrame = true;
    this->DrawClipRate = 1.00f;
}

bool ASSMapAreaEditor::ValidUserEditingActor() {
    return false;
}

void ASSMapAreaEditor::UpdatePlayerAreaInfo(TArray<UTextBlock*> infoDispFields) {
}

bool ASSMapAreaEditor::UpdateMapAreaMasterByUserEditing() {
    return false;
}

void ASSMapAreaEditor::ToSelfPlayer() {
}

void ASSMapAreaEditor::ToOtherPlayer() {
}

void ASSMapAreaEditor::SyncBrowserToObjects(const TArray<FString>& AssetPaths) {
}

void ASSMapAreaEditor::StartPointEditCtrl(const TArray<UCheckBox*>& targetCheckBoxs, UComboBoxString* selectorWidget, const TArray<UTextBlock*>& posDispBlocks, const TArray<UTextBlock*>& countDispBlocks) {
}

void ASSMapAreaEditor::StartPointEdit() {
}

void ASSMapAreaEditor::StartGroundFitCtrl(const TArray<UTextBlock*>& infoDispList) {
}

void ASSMapAreaEditor::StartAreaEditorMessage(const TArray<UTextBlock*>& messageAreaList) {
}

void ASSMapAreaEditor::ShowFitDisableDialog() {
}

void ASSMapAreaEditor::SetupCollectedTraceLocatorSelectItemList(UComboBoxString* SetupWidget, TArray<FText> InNameList) {
}

void ASSMapAreaEditor::SetupCollectedPlayerStartSelectItemList(UComboBoxString* SetupWidget, TArray<FText> InNameList) {
}

void ASSMapAreaEditor::SetupCollectedNoramlLocatorSelectItemList(UComboBoxString* SetupWidget, TArray<FText> InNameList) {
}

void ASSMapAreaEditor::SetSelectedLevelActors(const TArray<AActor*>& ActorsToSelect) {
}

void ASSMapAreaEditor::SetIsShowEditAnotherAreaFlag(bool IsShow) {
}

void ASSMapAreaEditor::SetIsEditWaterDirectableArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditWallDirectableArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditSmallArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditNearByWallArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditDirectableArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditCylinderSafeArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditBoxSafeArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditArea(EMapAreaEditType MapAreaEditType, bool IsEdit) {
}

void ASSMapAreaEditor::SetIsEditAirDirectableArea(bool IsEdit) {
}

void ASSMapAreaEditor::SetFieldSize(FVector Size) {
}

void ASSMapAreaEditor::SetEveryGroundFitFlag(bool IsSet) {
}

void ASSMapAreaEditor::SetEditorInvalidInfo() {
}

void ASSMapAreaEditor::SetDrawWireFrameFlag(bool IsSet) {
}

void ASSMapAreaEditor::SetAreaLimitDrawFlag(bool InSet) {
}

void ASSMapAreaEditor::SetAreaDrawClipRate(float Rate) {
}

void ASSMapAreaEditor::SetActionCameraDataAsset(USSActionCameraDataAsset* actionCameraDataAsset) {
}

void ASSMapAreaEditor::SelectFitResultActor(const FString& hitActorName) {
}

void ASSMapAreaEditor::SelectEditActor(FSSAreaEditorEditId EditId) {
}

void ASSMapAreaEditor::SaveAreaDataAsset() {
}

void ASSMapAreaEditor::ResetPlayers() {
}

void ASSMapAreaEditor::ResetAfterAreaOverride() {
}

void ASSMapAreaEditor::RemovePoint(EWarpPointType pointType, const FString& removePointName) {
}

bool ASSMapAreaEditor::RemoveMapAreaMaterByUserEdinting() {
    return false;
}

void ASSMapAreaEditor::ReleaseUserEditingActor() {
}

void ASSMapAreaEditor::MoveToUpperGroundPoint(float Offset, int32 tgtDirectionPointUniqId) {
}

bool ASSMapAreaEditor::IsPossibleChangeAreaSizeSelect() {
    return false;
}

bool ASSMapAreaEditor::IsPossibleChangeAreaSizeScale() {
    return false;
}

bool ASSMapAreaEditor::IsNearByWallAreaActorAlive(int32 AreaIdx) {
    return false;
}

bool ASSMapAreaEditor::IsEffectiveArea(FSSAreaEditorEditId EditId) {
    return false;
}

bool ASSMapAreaEditor::IsDirectableAreaActorAlive(int32 AreaIdx) {
    return false;
}

bool ASSMapAreaEditor::IsCylinderSafeAreaActorAlive(int32 AreaId) {
    return false;
}

bool ASSMapAreaEditor::IsBoxSafeAreaActorAlive(int32 AreaId) {
    return false;
}

bool ASSMapAreaEditor::IsAirDirectableAreaActorAlive(int32 AreaIdx) {
    return false;
}

void ASSMapAreaEditor::InitPointLists() {
}

int32 ASSMapAreaEditor::GetWaterDirectableAreaEntryNum() {
    return 0;
}

int32 ASSMapAreaEditor::GetWallDirectableAreaEntryNum() {
    return 0;
}

ASSMapAreaEditGuideCylinder* ASSMapAreaEditor::GetUserEditingActorCy() {
    return NULL;
}

AMapAreaEditGuideBox* ASSMapAreaEditor::GetUserEditingActor() {
    return NULL;
}

int32 ASSMapAreaEditor::GetSmallAreaEntryNum() {
    return 0;
}

FString ASSMapAreaEditor::GetSavedFilePath() {
    return TEXT("");
}

int32 ASSMapAreaEditor::GetSafeAreaEntryNum() {
    return 0;
}

int32 ASSMapAreaEditor::GetNearByWallAreaEntryNum() {
    return 0;
}

TArray<FText> ASSMapAreaEditor::GetMasterCollectedTracesLocatorNameList() {
    return TArray<FText>();
}

TArray<AActor*> ASSMapAreaEditor::GetMasterCollectedTraceLocatorList() {
    return TArray<AActor*>();
}

TArray<FText> ASSMapAreaEditor::GetMasterCollectedPlayerStartNameList() {
    return TArray<FText>();
}

TArray<AActor*> ASSMapAreaEditor::GetMasterCollectedPlayerStartList() {
    return TArray<AActor*>();
}

TArray<FText> ASSMapAreaEditor::GetMasterCollectedNormalLocatorNameList() {
    return TArray<FText>();
}

TArray<AActor*> ASSMapAreaEditor::GetMasterCollectedNormalLocatorList() {
    return TArray<AActor*>();
}

ASSMapWarpDataAssetHolder* ASSMapAreaEditor::GetMapWarpDataAssetHolder() {
    return NULL;
}

int32 ASSMapAreaEditor::GetMapAreaEditTypeEntryNum(EMapAreaEditType InMapAreaEditType) {
    return 0;
}

EMapAreaEditType ASSMapAreaEditor::GetMapAreaEditType(int32 InAreaTypeIndex) {
    return EMapAreaEditType::None;
}

bool ASSMapAreaEditor::GetIsEditArea(EMapAreaEditType MapAreaEditType) {
    return false;
}

int32 ASSMapAreaEditor::GetGuideEntryCount() {
    return 0;
}

FVector ASSMapAreaEditor::GetFieldSize() {
    return FVector{};
}

int32 ASSMapAreaEditor::GetDirectableaAreaEntryNum() {
    return 0;
}

bool ASSMapAreaEditor::GetAreaSizeSelect() {
    return false;
}

FVector ASSMapAreaEditor::GetAreaSizeScale() {
    return FVector{};
}

TArray<FSSAreaEditorEditId> ASSMapAreaEditor::GetAllAreaEditIdList(EMapAreaEditType MapAreaEditType) {
    return TArray<FSSAreaEditorEditId>();
}

int32 ASSMapAreaEditor::GetAirDirectableAreaEntryNum() {
    return 0;
}

bool ASSMapAreaEditor::FitAddNewAreaUp(int32 InNewAreaTypeIndex) {
    return false;
}

bool ASSMapAreaEditor::FitAddNewAreaRight(int32 InNewAreaTypeIndex) {
    return false;
}

bool ASSMapAreaEditor::FitAddNewAreaLeft(int32 InNewAreaTypeIndex) {
    return false;
}

bool ASSMapAreaEditor::FitAddNewAreaFront(int32 InNewAreaTypeIndex) {
    return false;
}

bool ASSMapAreaEditor::FitAddNewAreaDown(int32 InNewAreaTypeIndex) {
    return false;
}

bool ASSMapAreaEditor::FitAddNewAreaBack(int32 InNewAreaTypeIndex) {
    return false;
}

void ASSMapAreaEditor::execUndo(EAreaEditorUndoActionType undoType) {
}

void ASSMapAreaEditor::EvalWallDirectableArea(int32 limitNum) {
}

void ASSMapAreaEditor::EvaluateEditArea() {
}

void ASSMapAreaEditor::DrawPlayersIntoEditingArea() {
}

void ASSMapAreaEditor::DebugWarpRequestSequenceEvent(bool InReturn, bool InLoop) {
}

void ASSMapAreaEditor::DebugWarpRequest(FSSWarpRequestInfoDataAsset InWarpRequestInfoDataAsset) {
}

void ASSMapAreaEditor::DebugTestDrawAutoWallNear(const UObject* WorldContextObject, FVector centerPos, float AreaXY, float AreaZ, int32 OctDepth, float Time, float Tickness, bool bWithSearchArea, int32 drawRangeType) {
}

void ASSMapAreaEditor::CreateNewPoint(EWarpPointType pointType, const FString& newPointName) {
}

bool ASSMapAreaEditor::CreateNewAreaInstance(ASSMapWarpDataAssetHolder* MapWarpDataAssetHolder, int32 areaTypeIndex, FVector centerPos) {
    return false;
}

bool ASSMapAreaEditor::CreateNewArea(int32 InAreaTypeIndex) {
    return false;
}

TArray<FText> ASSMapAreaEditor::CreateActorNameList(const TArray<AActor*>& InCheckList) {
    return TArray<FText>();
}

void ASSMapAreaEditor::CloseEditor() {
}

void ASSMapAreaEditor::CleanupGuides() {
}

void ASSMapAreaEditor::ClaenupAfterGuideActors(bool withDialog) {
}

bool ASSMapAreaEditor::CheckContainSurfaceType(const AStaticMeshActor* StaticMeshActor, TEnumAsByte<EPhysicalSurface> SurfaceType) {
    return false;
}

bool ASSMapAreaEditor::CheckAdoveLandscapeHeightThreshold(const AStaticMeshActor* StaticMeshActor, float heightThreshold) {
    return false;
}

void ASSMapAreaEditor::ChangeOceanPlaneActorDisp(bool isDisp) {
}

void ASSMapAreaEditor::ChangeMarginDisp(bool isDisp) {
}

void ASSMapAreaEditor::ChangeEffectActorDisp(bool isDisp) {
}

void ASSMapAreaEditor::ChangeBirdEyeMode(bool IsSet) {
}

void ASSMapAreaEditor::ChangeAreaSizeSelect(bool isLarge) {
}

void ASSMapAreaEditor::ChangeAreaSizeScale(FVector Scale) {
}

void ASSMapAreaEditor::ChangeActiveEditPointCategory(UCheckBox* operatedWidget) {
}

void ASSMapAreaEditor::CameraMoveToUserEditingActor() {
}

void ASSMapAreaEditor::AttachEditedPointToSaveData() {
}

void ASSMapAreaEditor::AfterCreateNewAreasFitGround() {
}

void ASSMapAreaEditor::AdjustAllAirDirectablePoint() {
}


