#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSBattleMode010ListDataAsset.generated.h"

class USSBattleMode010DataAsset;

UCLASS(Blueprintable)
class SS_API USSBattleMode010ListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBattleMode010DataAsset*> PtrRecords;
    
    USSBattleMode010ListDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USSBattleMode010DataAsset* GetBattleMode010Data(FName InBattleMode010Id) const;
    
};

