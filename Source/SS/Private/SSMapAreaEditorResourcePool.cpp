#include "SSMapAreaEditorResourcePool.h"

USSMapAreaEditorResourcePool::USSMapAreaEditorResourcePool() {
}

void USSMapAreaEditorResourcePool::Setup(UWorld* World) {
}

void USSMapAreaEditorResourcePool::ReturnGuideCylinder(ASSMapAreaEditGuideCylinder* GuideCylinder) {
}

void USSMapAreaEditorResourcePool::ReturnGuideBox(AMapAreaEditGuideBox* GuideBox) {
}

ASSMapAreaEditGuideCylinder* USSMapAreaEditorResourcePool::RentGuideCylinder() {
    return NULL;
}

AMapAreaEditGuideBox* USSMapAreaEditorResourcePool::RentGuideBox() {
    return NULL;
}

void USSMapAreaEditorResourcePool::Finish(UWorld* World) {
}

bool USSMapAreaEditorResourcePool::CheckGuidePoolHealth() {
    return false;
}


