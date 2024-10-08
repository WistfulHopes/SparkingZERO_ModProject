#pragma once
#include "CoreMinimal.h"
#include "KoratReplaceTransitionActionData.h"
#include "MutualDataAsset.h"
#include "KoratReplaceTransitionActionDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratReplaceTransitionActionDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratReplaceTransitionActionData> Records;
    
public:
    UKoratReplaceTransitionActionDataAsset();

};

