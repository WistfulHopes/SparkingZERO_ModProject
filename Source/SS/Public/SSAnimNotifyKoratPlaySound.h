#pragma once
#include "CoreMinimal.h"
#include "SSAnimNotify.h"
#include "SSAnimNotifyKoratPlaySound.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, CollapseCategories)
class USSAnimNotifyKoratPlaySound : public USSAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Follow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMultiplier;
    
public:
    USSAnimNotifyKoratPlaySound();

};

