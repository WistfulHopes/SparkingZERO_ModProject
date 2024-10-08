#include "MapPlotter.h"

UMapPlotter::UMapPlotter() {
    this->isSamplingFinish = false;
    this->ParentHolder = NULL;
    this->bIsPlayerStartToCommonAreaDone = false;
    this->bIsEnableSetupRay = false;
}

void UMapPlotter::Show(UWorld* World) {
}

void UMapPlotter::Setup(ASSMapWarpDataAssetHolder* InAreaHolder, bool bIsIgnoreDataAsset) {
}

void UMapPlotter::SetIsSamplingFinish(bool flag) {
}

void UMapPlotter::SetEnableSetupRay(bool InIsEnable) {
}

bool UMapPlotter::RecreateAreaDataAsset(USSMapWarpAreaDataAsset*& CreateWork) {
    return false;
}

int32 UMapPlotter::MakeSafeAreaId() {
    return 0;
}

FSSWarpTargetAreaSet UMapPlotter::GetWarpAreaSet() {
    return FSSWarpTargetAreaSet{};
}

int32 UMapPlotter::GetTotalSafeAreaEntryNum() {
    return 0;
}

bool UMapPlotter::GetIsSamplingFinish() {
    return false;
}

int32 UMapPlotter::GetCylinderSafeAreaEntryNum() {
    return 0;
}

int32 UMapPlotter::GetBoxSafeAreaEntryNum() {
    return 0;
}

TArray<FSSLayeredCylinderSafeArea> UMapPlotter::GetAllCylinderSafeAreaList() {
    return TArray<FSSLayeredCylinderSafeArea>();
}

TArray<FSSLayeredBoxSafeArea> UMapPlotter::GetAllBoxSafeAreaList() {
    return TArray<FSSLayeredBoxSafeArea>();
}

void UMapPlotter::FixInternalAreaDatas() {
}

bool UMapPlotter::CreateWaterDirectableArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::CreateWallDirectableArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::CreateSmallDirectableArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::CreateNearByWallArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::CreateLayeredCylinderSafeArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::CreateLayeredBoxSafeArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::CreateDirectableArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::CreateAirDirectableArea(const FVector& centerPos) {
    return false;
}

bool UMapPlotter::AreaSetupWithAreaData(const USSMapWarpAreaDataAsset* InAreaData) {
    return false;
}


