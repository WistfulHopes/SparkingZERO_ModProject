#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.h"
#include "SSEventSceneCharacterCompileDescription.h"
#include "SSEventSceneChoicesCompileDescriptionCO.h"
#include "SSEventSceneDataAsset.h"
#include "SSEventSceneSubsceneCompileDescriptionCO.h"
#include "SSEventSceneCODataAsset.generated.h"

class ASSEventSceneScriptCO;
class USSEventSceneEnvDataAsset;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class USSEventSceneCODataAsset : public USSEventSceneDataAsset {
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
    TArray<FSSEventSceneSubsceneCompileDescriptionCO> SubsceneDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSEventSceneScriptCO> Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSEventSceneChoicesCompileDescriptionCO ChoicesDescription;
    
public:
    USSEventSceneCODataAsset();

};

