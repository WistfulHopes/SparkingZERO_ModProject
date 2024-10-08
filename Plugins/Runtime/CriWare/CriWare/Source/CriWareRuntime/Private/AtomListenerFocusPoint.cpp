#include "AtomListenerFocusPoint.h"

UAtomListenerFocusPoint::UAtomListenerFocusPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DistanceFocusLevel = 1.00f;
    this->DirectionFocusLevel = 0.00f;
}


