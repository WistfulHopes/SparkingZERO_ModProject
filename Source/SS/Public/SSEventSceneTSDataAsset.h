#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.h"
#include "SSEventSceneCharacterCompileDescription.h"
#include "SSEventSceneDataAsset.h"
#include "SSEventSceneSubsceneCompileDescriptionTS.h"
#include "SSEventSceneTSDataAsset.generated.h"

class ASSEventSceneScriptTS;
class USSEventSceneEnvDataAsset;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class USSEventSceneTSDataAsset : public USSEventSceneDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEventSceneEnvDataAsset* EnvData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> SubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList PlayMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneCharacterCompileDescription> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneSubsceneCompileDescriptionTS> SubsceneDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSEventSceneScriptTS> Script;
    
public:
    USSEventSceneTSDataAsset();

};

