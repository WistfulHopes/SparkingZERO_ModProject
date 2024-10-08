#include "MapAreaEditGuideBox.h"

AMapAreaEditGuideBox::AMapAreaEditGuideBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->uniqueId = -1;
    this->EditType = EMapAreaEditType::None;
    this->IsOutOfArea = false;
    this->IsAreaDelete = false;
    this->SizeType = EMapAreaSizeType::NORMAL;
}

void AMapAreaEditGuideBox::SetEditType(EMapAreaEditType Type) {
}

EMapAreaEditType AMapAreaEditGuideBox::GetEditType() {
    return EMapAreaEditType::None;
}


