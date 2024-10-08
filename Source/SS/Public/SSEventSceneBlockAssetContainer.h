#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataList.h"
#include "SSEventSceneBlockAssetContainer.generated.h"

class ASSBattleLevelScriptActor;

UCLASS(Blueprintable)
class USSEventSceneBlockAssetContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSBattleLevelScriptActor* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> LoadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> LoadInstances;
    
public:
    USSEventSceneBlockAssetContainer();

};

