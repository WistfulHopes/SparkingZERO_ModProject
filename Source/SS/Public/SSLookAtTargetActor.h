#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELookAtTargetType.h"
#include "SSLookAtTargetLastParameter.h"
#include "SSLookAtTargetActor.generated.h"

UCLASS(Blueprintable)
class ASSLookAtTargetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLookAtTargetLastParameter LastParameter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float lifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ELookAtTargetType LookAtTargetType;
    
public:
    ASSLookAtTargetActor(const FObjectInitializer& ObjectInitializer);

};

