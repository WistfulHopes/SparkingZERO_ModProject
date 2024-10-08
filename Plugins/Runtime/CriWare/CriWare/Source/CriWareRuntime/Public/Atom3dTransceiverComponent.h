#pragma once
#include "CoreMinimal.h"
#include "Atom3dSourceBaseComponent.h"
#include "Atom3dTransceiverComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtom3dTransceiverComponent : public UAtom3dSourceBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InputPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DefaultGlobalAisacs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsInputCrossfadeFieldDebugSpheresVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDirectAudioRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCrossfadeDistance;
    
    UAtom3dTransceiverComponent(const FObjectInitializer& ObjectInitializer);

};

