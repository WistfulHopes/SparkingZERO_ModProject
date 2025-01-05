#pragma once
#include "CoreMinimal.h"
#include "KoratBattleDirectingData.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratBattlePlayMap.h"
#include "MutualDataAsset.h"
#include "SSBattleMode010DataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API USSBattleMode010DataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattlePlayCharacter> EnemyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap BattlePlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleDirectingData BattleDirecting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReleaseCondition;
    
    USSBattleMode010DataAsset();

    UFUNCTION(BlueprintCallable)
    FName GetReleaseCondition();
    
    UFUNCTION(BlueprintCallable)
    FName GetBattlePlayMapName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKoratBattlePlayMap GetBattleMap() const;
    
    UFUNCTION(BlueprintCallable)
    FKoratBattleDirectingData GetBattleDirecting();
    
};

