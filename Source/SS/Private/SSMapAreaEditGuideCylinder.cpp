#include "SSMapAreaEditGuideCylinder.h"

ASSMapAreaEditGuideCylinder::ASSMapAreaEditGuideCylinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->uniqueId = -1;
    this->EditType = EMapAreaEditType::None;
    this->IsOutOfArea = false;
    this->IsAreaDelete = false;
    this->SizeType = EMapAreaSizeType::NORMAL;
}

void ASSMapAreaEditGuideCylinder::SetEditType(EMapAreaEditType Type) {
}

EMapAreaEditType ASSMapAreaEditGuideCylinder::GetEditType() {
    return EMapAreaEditType::None;
}


