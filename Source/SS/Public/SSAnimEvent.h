#pragma once
#include "CoreMinimal.h"
#include "SSAnimEvent.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FSSAnimEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    SS_API FSSAnimEvent();
};

