#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSLoggingToolSettingDataAssetRecord.h"
#include "SSLoggingToolSettingDataAsset.generated.h"

UCLASS(Blueprintable)
class SS_API USSLoggingToolSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSLoggingToolSettingDataAssetRecord> RecordsByDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattlePlayCharacter> TargetCharacters;
    
    USSLoggingToolSettingDataAsset();

    UFUNCTION(BlueprintCallable)
    void ImportSettingDataFromCSV();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKoratBattlePlayCharacter> GetTargetCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FKoratCharacterDataList, FSSLoggingToolSettingDataAssetRecord> GetCharactersActionMap();
    
};

