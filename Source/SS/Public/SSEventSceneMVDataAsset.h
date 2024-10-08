#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.h"
#include "SSEventSceneCharacterCompileDescription.h"
#include "SSEventSceneDataAsset.h"
#include "SSEventSceneSubsceneCompileDescriptionMV.h"
#include "SSEventSceneMVDataAsset.generated.h"

class ASSEventSceneScriptMV;
class USSEventSceneEnvDataAsset;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class USSEventSceneMVDataAsset : public USSEventSceneDataAsset {
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
    FSSEventSceneSubsceneCompileDescriptionMV SubsceneDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASSEventSceneScriptMV> Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIFSuggest;
    
public:
    USSEventSceneMVDataAsset();

};

