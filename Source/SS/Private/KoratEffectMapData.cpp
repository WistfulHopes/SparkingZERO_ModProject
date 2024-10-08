#include "KoratEffectMapData.h"

UKoratEffectMapData::UKoratEffectMapData() {
    this->SurfaceTypeToAtbEnumDataAsset = NULL;
    this->InteractTriggerEnumDataAsset = NULL;
    this->InteractAtbDataAsset = NULL;
    this->InteractSpaceAreaDataAsset = NULL;
}

bool UKoratEffectMapData::IsSetuped() const {
    return false;
}

bool UKoratEffectMapData::IsNoneMapKey() const {
    return false;
}

TEnumAsByte<EPhysicalSurface> UKoratEffectMapData::GetPhysicalSurfaceFromInteractAtbType(const FKoratInteractAtbTypeDataList InAtbType) const {
    return SurfaceType_Default;
}

FKoratMapDataList UKoratEffectMapData::GetMapName() const {
    return FKoratMapDataList{};
}

FKoratInteractAtbTypeDataList UKoratEffectMapData::GetInteractAtbType(const TEnumAsByte<EPhysicalSurface> InPhysicalSurface) const {
    return FKoratInteractAtbTypeDataList{};
}


