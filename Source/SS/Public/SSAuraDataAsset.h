#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KoratAuraLevelDataList.h"
#include "KoratAuraPointLightDataList.h"
#include "KoratAuraRimLightDataList.h"
#include "KoratRimLightFrequencyDataList.h"
#include "MutualDataAsset.h"
#include "SSAuraDataRecord.h"
#include "SSAuraDataAsset.generated.h"

class ULevelSequence;

UCLASS(Blueprintable, MinimalAPI)
class USSAuraDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAuraPointLightDataList AuraPointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratAuraRimLightDataList AuraRimLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceLv1In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyDataList FrequencyLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceLv2In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyDataList FrequencyLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceLv3In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyDataList FrequencyLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> LevelSequenceLv4In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRimLightFrequencyDataList FrequencyLv4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratAuraLevelDataList, FSSAuraDataRecord> Records;
    
    USSAuraDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSequenceByAuraLevel(const FKoratAuraLevelDataList& InAuraLevel, FSoftObjectPath& OutPath) const;
    
};

