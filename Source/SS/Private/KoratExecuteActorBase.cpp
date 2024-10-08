#include "KoratExecuteActorBase.h"

AKoratExecuteActorBase::AKoratExecuteActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExecuteActor = NULL;
}

void AKoratExecuteActorBase::SetExecuteActor(AActor* InActor) {
}

AActor* AKoratExecuteActorBase::GetExecuteActor() const {
    return NULL;
}


