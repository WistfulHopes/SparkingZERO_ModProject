#include "CriFsLoader.h"
#include "CriFsLoaderComponent.h"

ACriFsLoader::ACriFsLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCriFsLoaderComponent>(TEXT("CriFsLoaderComponent0"));
    this->LoaderComponent = (UCriFsLoaderComponent*)RootComponent;
}


