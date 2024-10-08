#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomLipSyncSectionParameter.h"
#include "AtomLipSyncSectionParameterSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class CRIWAREADXLIPSYNC_API UAtomLipSyncSectionParameterSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomLipSyncSectionParameter AtomLipSyncSectionParameter;
    
    UAtomLipSyncSectionParameterSettings();

};

