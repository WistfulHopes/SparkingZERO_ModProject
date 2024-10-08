#include "KoratInternalLineTraceParameter.h"

UKoratInternalLineTraceParameter::UKoratInternalLineTraceParameter() {
}

TEnumAsByte<EPhysicalSurface> UKoratInternalLineTraceParameter::GetAttributePhysicalSurface() const {
    return SurfaceType_Default;
}


