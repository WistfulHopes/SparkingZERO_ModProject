#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratIdManagedClient.h"
#include "KoratPoolableActorBase.h"
#include "KoratOverrideTransformActor.generated.h"

class AActor;
class UKoratDefaultIdData;
class USceneComponent;

UCLASS(Blueprintable)
class AKoratOverrideTransformActor : public AKoratPoolableActorBase, public IKoratIdManagedClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKoratDefaultIdData* IdDataInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ReferenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OverrideTransformOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOwnerSequencerDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPossessableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedCheckAttachObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRootComponent;
    
public:
    AKoratOverrideTransformActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

