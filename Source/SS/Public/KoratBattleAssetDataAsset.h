#pragma once
#include "CoreMinimal.h"
#include "KoratBattleAssetDataAssetRecord.h"
#include "KoratSequencerBindingObjectRecord.h"
#include "MutualDataAsset.h"
#include "KoratBattleAssetDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratBattleAssetDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RebindCharacterNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSequencerBindingObjectRecord> SequencerBindingObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ImpactProcedureNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBattleAssetDataAssetRecord> Records;
    
public:
    UKoratBattleAssetDataAsset();

};

