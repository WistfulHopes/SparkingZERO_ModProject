#include "SSTraceLocator.h"

ASSTraceLocator::ASSTraceLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseEditorTick = false;
    this->TraceCollisionChannel.AddDefaulted(1);
    this->TraceLength = 500.00f;
    this->TraceSphereRadius = 30.00f;
}

void ASSTraceLocator::TraceTest(FHitResult& OutHitResult, FVector& OutStartPos, FVector& OutEndPos) {
}



