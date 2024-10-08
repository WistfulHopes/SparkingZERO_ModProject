#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CriFsLoader.generated.h"

class UCriFsLoaderComponent;

UCLASS(Blueprintable, MinimalAPI)
class ACriFsLoader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCriFsLoaderComponent* LoaderComponent;
    
    ACriFsLoader(const FObjectInitializer& ObjectInitializer);

};

