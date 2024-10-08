#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EKoratEmitterParamDataType.h"
#include "KoratEmitterInstanceDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKoratEmitterInstanceDataComp : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratEmitterParamDataType DataType;
    
    UKoratEmitterInstanceDataComp(const FObjectInitializer& ObjectInitializer);

};

