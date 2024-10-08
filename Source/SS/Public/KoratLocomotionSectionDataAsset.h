#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSLocomotionSection.h"
#include "KoratLocomotionSectionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratLocomotionSectionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLocomotionSection> LocomotionSection;
    
    UKoratLocomotionSectionDataAsset();

};

