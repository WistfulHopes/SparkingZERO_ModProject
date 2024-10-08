#include "KoratObjectPool.h"

UKoratObjectPool::UKoratObjectPool() {
    this->ManagedActorClass = NULL;
    this->NotEnoughType = EKoratNotEnoughPoolObjectsType::None;
}


