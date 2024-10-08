#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "SSResource.h"
#include "SSLevelScriptActor.generated.h"

class UObject;
class USSRandom;

UCLASS(Blueprintable, MinimalAPI)
class ASSLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPersistentLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSResource> LoadedResources;
    
public:
    ASSLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadInstances(const TArray<TSoftObjectPtr<UObject>>& InInstances);
    
    UFUNCTION(BlueprintCallable)
    void UnloadClasses(const TArray<TSoftClassPtr<UObject>>& InClasses);
    
    UFUNCTION(BlueprintCallable)
    void LoadInstancesAsync(const TArray<TSoftObjectPtr<UObject>>& InInstances);
    
    UFUNCTION(BlueprintCallable)
    void LoadInstances(const TArray<TSoftObjectPtr<UObject>>& InInstances);
    
    UFUNCTION(BlueprintCallable)
    void LoadFinishInstances(const TArray<TSoftObjectPtr<UObject>>& InInstances);
    
    UFUNCTION(BlueprintCallable)
    void LoadFinishClasses(const TArray<TSoftClassPtr<UObject>>& InClasses);
    
    UFUNCTION(BlueprintCallable)
    void LoadClassesAsync(const TArray<TSoftClassPtr<UObject>>& InClasses);
    
    UFUNCTION(BlueprintCallable)
    void LoadClasses(const TArray<TSoftClassPtr<UObject>>& InClasses);
    
    UFUNCTION(BlueprintCallable)
    void LoadAssets(const TArray<TSoftClassPtr<UObject>>& InAssets);
    
    UFUNCTION(BlueprintCallable)
    bool CheckInstanceLoaded(const TArray<TSoftObjectPtr<UObject>>& InInstances, bool bPreloadCheck);
    
    UFUNCTION(BlueprintCallable)
    bool CheckClassLoaded(const TArray<TSoftClassPtr<UObject>>& InClasses, bool bPreloadCheck);
    
};

