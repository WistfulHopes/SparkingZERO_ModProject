#pragma once
#include "CoreMinimal.h"
#include "EKoratBlastImpactCameraType.h"
#include "MutualDataAsset.h"
#include "SSBlastImpactActionRecord.h"
#include "SSBlastImpactGameRecord.h"
#include "SSBlastImpactDataAsset.generated.h"

UCLASS(Blueprintable)
class USSBlastImpactDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBlastImpactCameraType, FSSBlastImpactGameRecord> KidanCameraSequenceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBlastImpactActionRecord> ActionList;
    
    USSBlastImpactDataAsset();

    UFUNCTION(BlueprintCallable)
    void InitializeCameraSequence();
    
    UFUNCTION(BlueprintCallable)
    void InitializeActionList();
    
};

