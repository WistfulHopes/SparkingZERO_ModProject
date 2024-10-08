#pragma once
#include "CoreMinimal.h"
#include "SSLevelScriptActor.h"
#include "SSDebugLoadTestLvScriptActor.generated.h"

class UKoratCharacterUIActionDataAsset;
class UObject;

UCLASS(Blueprintable)
class ASSDebugLoadTestLvScriptActor : public ASSLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UKoratCharacterUIActionDataAsset*> UIActionDatas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> UIActionDataInstances;
    
public:
    ASSDebugLoadTestLvScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLoadUIActionDatas(bool InBlockLoad);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStreamBurstMode(bool InStreamBurstMode);
    
};

