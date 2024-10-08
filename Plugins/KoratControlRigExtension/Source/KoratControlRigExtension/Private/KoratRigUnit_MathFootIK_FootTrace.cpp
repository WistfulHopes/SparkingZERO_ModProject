#include "KoratRigUnit_MathFootIK_FootTrace.h"

FKoratRigUnit_MathFootIK_FootTrace::FKoratRigUnit_MathFootIK_FootTrace() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->StartScale = 0.00f;
    this->EndScale = 0.00f;
    this->Channel = ECC_WorldStatic;
    this->Radius = 0.00f;
}

