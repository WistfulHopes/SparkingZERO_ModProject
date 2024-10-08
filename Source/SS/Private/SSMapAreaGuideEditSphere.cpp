#include "SSMapAreaGuideEditSphere.h"

ASSMapAreaGuideEditSphere::ASSMapAreaGuideEditSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->IsActive = false;
    this->connectedActor = NULL;
}


