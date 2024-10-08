#pragma once
#include "CoreMinimal.h"
#include "KoratAiTypeDataList.h"
#include "KoratBattleDirectingSetup.h"
#include "MutualDataAsset.h"
#include "SSBattlePracticeAction.h"
#include "SSBattlePracticeDataAsset.generated.h"

class USSBattlePracticeMenuDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class USSBattlePracticeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBattlePracticeMenuDataAsset*> MenuAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattlePracticeAction> FailureActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAiTypeDataList DefaultAiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleDirectingSetup> DirectingSetups;
    
    USSBattlePracticeDataAsset();

};

