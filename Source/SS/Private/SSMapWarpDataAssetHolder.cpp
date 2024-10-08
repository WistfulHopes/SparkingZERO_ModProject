#include "SSMapWarpDataAssetHolder.h"

ASSMapWarpDataAssetHolder::ASSMapWarpDataAssetHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaLimitCeil = NULL;
    this->OceanPlaneActor = NULL;
    this->bPermitWarpSystemCheck = false;
    this->bIsInBattleMap = false;
    this->MapPlotter = NULL;
    this->WarpAreaAssetInst = NULL;
}

bool ASSMapWarpDataAssetHolder::TryLoadAreaData() {
    return false;
}

void ASSMapWarpDataAssetHolder::SetSavedFileName(const FString& InFilename) {
}

void ASSMapWarpDataAssetHolder::SetPlotterEnableSetupRay(bool InIsEnable) {
}

void ASSMapWarpDataAssetHolder::SetCollectedTraceLocatorListByEditData(TArray<AActor*> edittedPoints) {
}

void ASSMapWarpDataAssetHolder::SetCollectedPlayerStartListByEditData(TArray<AActor*> edittedPoints) {
}

void ASSMapWarpDataAssetHolder::SetCollectedNormalLocatorListByEditData(TArray<AActor*> edittedPoints) {
}

bool ASSMapWarpDataAssetHolder::SearchDirectableAreaPoint(const FTransform& InTransform, FTransform& OutResultTransform, const EWarpRequestType InWarpRequestType, const bool InTargetAir, const bool InTargetWater, const ASSCharacter* InCharacter, const ASSCharacter* InTargetCharacter, const int32 InShuffle) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveWaterDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveWallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveSmallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveNearByWallAreaByUserEdit(AMapAreaEditGuideBox* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveCylinderSafeAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveBoxSafeAreaByUserEdit(AMapAreaEditGuideBox* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RemoveAirDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::RecreateAreaDataAsset() {
    return false;
}

void ASSMapWarpDataAssetHolder::PlotterHardResetP() {
}

bool ASSMapWarpDataAssetHolder::PickupGroundHit(TArray<FHitResult>& CandidateList, FHitResult& InResultWork) {
    return false;
}

bool ASSMapWarpDataAssetHolder::LoadMapAreaData(const FString& InMapName) {
    return false;
}

bool ASSMapWarpDataAssetHolder::IsSafeArea(FVector InCheckPos, ASSCharacter* InCharacter, EWarpRequestType InWarpRequestType, bool InCharacterInAir) {
    return false;
}

bool ASSMapWarpDataAssetHolder::IsOceanPlaneActor(AActor* InCheckActor) {
    return false;
}

TArray<FHitResult> ASSMapWarpDataAssetHolder::IsNearByWallSizedP(FTransform InTransform, float checkRadius, float checkHeight, float startOfs, float endOfs, float borderSize) {
    return TArray<FHitResult>();
}

bool ASSMapWarpDataAssetHolder::IsNearByWall(FTransform& InTransform) {
    return false;
}

bool ASSMapWarpDataAssetHolder::IsLandscapeActor(AActor* InCheckActor) {
    return false;
}

bool ASSMapWarpDataAssetHolder::IsHitUpperObject(TArray<FHitResult> InCheckHits) {
    return false;
}

bool ASSMapWarpDataAssetHolder::IsFieldLimitActor(AActor* checkActor) {
    return false;
}

bool ASSMapWarpDataAssetHolder::IsCharacterNearByWall(ASSCharacter* InCharacter) {
    return false;
}

bool ASSMapWarpDataAssetHolder::IsAreaSetupReady() {
    return false;
}

bool ASSMapWarpDataAssetHolder::GetWaterDirectablePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas) {
    return false;
}

int32 ASSMapWarpDataAssetHolder::GetWaterDirectableAreaEntryNum() {
    return 0;
}

FSSWarpTargetAreaSet ASSMapWarpDataAssetHolder::GetWarpAreaSet() {
    return FSSWarpTargetAreaSet{};
}

int32 ASSMapWarpDataAssetHolder::GetWallDirectableAreaEntryNum() {
    return 0;
}

bool ASSMapWarpDataAssetHolder::GetWallDirctblePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas) {
    return false;
}

bool ASSMapWarpDataAssetHolder::GetSmallDirectablePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas) {
    return false;
}

int32 ASSMapWarpDataAssetHolder::GetSmallAreaEntryNum() {
    return 0;
}

FString ASSMapWarpDataAssetHolder::GetSavedFileName() {
    return TEXT("");
}

int32 ASSMapWarpDataAssetHolder::GetSafeCylinderAreaEntryNum() {
    return 0;
}

int32 ASSMapWarpDataAssetHolder::GetSafeBoxAreaEntryNum() {
    return 0;
}

int32 ASSMapWarpDataAssetHolder::GetSafeAreaEntryNum() {
    return 0;
}

FSSLayeredCylinderSafeArea ASSMapWarpDataAssetHolder::GetPlotterCylinderSafeAreaById(int32 ID) {
    return FSSLayeredCylinderSafeArea{};
}

FSSLayeredBoxSafeArea ASSMapWarpDataAssetHolder::GetPlotterBoxSafeAreaById(int32 ID) {
    return FSSLayeredBoxSafeArea{};
}

int32 ASSMapWarpDataAssetHolder::GetPlayerIndex(const ASSCharacter* InTargetCharacter) {
    return 0;
}

bool ASSMapWarpDataAssetHolder::GetOtherSpacePositionDirect(const FTransform& InTransform, FTransform& OutResultTransform) {
    return false;
}

AActor* ASSMapWarpDataAssetHolder::GetOceanPlaneActor() {
    return NULL;
}

bool ASSMapWarpDataAssetHolder::GetNearByWallWithAreaCheck(FTransform Transform, TArray<FSSWarpNearByWallArea>& OutAreas) {
    return false;
}

int32 ASSMapWarpDataAssetHolder::GetNearByWallAreaEntryNum() {
    return 0;
}

APlayerStart* ASSMapWarpDataAssetHolder::GetInfieldPlayerStart(FName InName) {
    return NULL;
}

ASSTraceLocator* ASSMapWarpDataAssetHolder::GetInfieldLocator(FName InName) {
    return NULL;
}

int32 ASSMapWarpDataAssetHolder::GetDirectableaAreaNum() {
    return 0;
}

bool ASSMapWarpDataAssetHolder::GetDirctblePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas, bool isLarge) {
    return false;
}

bool ASSMapWarpDataAssetHolder::GetCylinderSafeAreaWithAreaCheck(FTransform Transform, TArray<FSSLayeredCylinderSafeArea>& OutAreas) {
    return false;
}

FKoratMapDataList ASSMapWarpDataAssetHolder::GetCurrentMapList() {
    return FKoratMapDataList{};
}

FKoratBattlePlayMap ASSMapWarpDataAssetHolder::GetCurrentBattleMap() {
    return FKoratBattlePlayMap{};
}

TArray<AActor*> ASSMapWarpDataAssetHolder::GetCollectedTraceLocatorList() {
    return TArray<AActor*>();
}

int32 ASSMapWarpDataAssetHolder::GetCollectedPlayerStartNum() {
    return 0;
}

TArray<AActor*> ASSMapWarpDataAssetHolder::GetCollectedPlayerStartList() {
    return TArray<AActor*>();
}

AActor* ASSMapWarpDataAssetHolder::GetCollectedPlayerStartByIndex(int32 InIdx) {
    return NULL;
}

TArray<AActor*> ASSMapWarpDataAssetHolder::GetCollectedNormalLocatorList() {
    return TArray<AActor*>();
}

ASSCharacterWarpCtrl* ASSMapWarpDataAssetHolder::GetCharacterWarpCtrl() {
    return NULL;
}

float ASSMapWarpDataAssetHolder::GetCharacterHeightOffset(const ASSCharacter* InCharacter) {
    return 0.0f;
}

float ASSMapWarpDataAssetHolder::GetCeilHeight() {
    return 0.0f;
}

AActor* ASSMapWarpDataAssetHolder::GetCeilActor() {
    return NULL;
}

bool ASSMapWarpDataAssetHolder::GetBoxSafeAreaWithAreaCheck(FTransform Transform, TArray<FSSLayeredBoxSafeArea>& OutAreas) {
    return false;
}

TArray<AActor*> ASSMapWarpDataAssetHolder::GetAreaWallActors() {
    return TArray<AActor*>();
}

TArray<FSSLayeredCylinderSafeArea> ASSMapWarpDataAssetHolder::GetAllCylinderSafeAreaList() {
    return TArray<FSSLayeredCylinderSafeArea>();
}

TArray<FSSLayeredBoxSafeArea> ASSMapWarpDataAssetHolder::GetAllBoxSafeAreaList() {
    return TArray<FSSLayeredBoxSafeArea>();
}

int32 ASSMapWarpDataAssetHolder::GetAirDirectableaAreaNum() {
    return 0;
}

bool ASSMapWarpDataAssetHolder::GetAirDirctblePointWithAreaCheck(FTransform Transform, TArray<FSSWarpDirectablePoint>& OutAreas, bool isLarge) {
    return false;
}

USSMapWarpAreaDataAsset* ASSMapWarpDataAssetHolder::GetActiveAreaDataAsset() {
    return NULL;
}

TArray<FSSWarpPoint> ASSMapWarpDataAssetHolder::CreateSaveAssetPointDatas(TArray<FSSWarpPoint>& OutCreatedPointDatas) {
    return TArray<FSSWarpPoint>();
}

void ASSMapWarpDataAssetHolder::CollectReferencePoints() {
}

bool ASSMapWarpDataAssetHolder::ChangeWaterDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::ChangeWallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::ChangeSmallDirectableAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::ChangeNearByWallAreaByUserEdit(AMapAreaEditGuideBox* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::ChangeDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::ChangeCyliinderSafeAreaByUserEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::ChangeBoxSafeAreaByUserEdit(AMapAreaEditGuideBox* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::ChangeAirDirectableAreaByUserCyEdit(ASSMapAreaEditGuideCylinder* EditData) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewWaterDirectableArea(FVector createPosition) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewWallDirectableArea(FVector createPosition) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewSmallDirectableArea(FVector createPosition) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewNearByWallArea(FVector createPosition) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewLayeredCylinderSafeArea(FVector createPosition) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewLayeredBoxSafeArea(FVector createPosition) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewDirectableArea(FVector createPosition) {
    return false;
}

bool ASSMapWarpDataAssetHolder::AddNewAirDirectableArea(FVector createPosition) {
    return false;
}


