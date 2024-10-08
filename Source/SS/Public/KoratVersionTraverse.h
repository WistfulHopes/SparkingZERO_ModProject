#pragma once
#include "CoreMinimal.h"
#include "EVersionID.h"
#include "KoratVersionTraverse.generated.h"

class UKoratVersionPresetDataAsset;

USTRUCT(BlueprintType)
struct FKoratVersionTraverse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKoratVersionPresetDataAsset* VersionPresetDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EVersionID> VersionSet;
    
    SS_API FKoratVersionTraverse();
};

