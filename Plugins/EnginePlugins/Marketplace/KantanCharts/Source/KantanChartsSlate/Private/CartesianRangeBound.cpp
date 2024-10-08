#include "CartesianRangeBound.h"

FCartesianRangeBound::FCartesianRangeBound() {
    this->Type = ECartesianRangeBoundType::FixedValue;
    this->FixedBoundValue = 0.00f;
}

