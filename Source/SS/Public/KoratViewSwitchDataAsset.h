#pragma once
#include "CoreMinimal.h"
#include "KoratViewSwitchSkeltalPair.h"
#include "MutualDataAsset.h"
#include "KoratViewSwitchDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratViewSwitchDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratViewSwitchSkeltalPair> SkeletalPair;
    
    UKoratViewSwitchDataAsset();

};

