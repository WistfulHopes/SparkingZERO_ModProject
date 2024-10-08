#include "SSLevelScriptActor.h"
#include "SSRandom.h"

ASSLevelScriptActor::ASSLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("Random_ASSLevelScriptActor"));
    this->bPersistentLevel = false;
}

void ASSLevelScriptActor::UnloadInstances(const TArray<TSoftObjectPtr<UObject>>& InInstances) {
}

void ASSLevelScriptActor::UnloadClasses(const TArray<TSoftClassPtr<UObject>>& InClasses) {
}

void ASSLevelScriptActor::LoadInstancesAsync(const TArray<TSoftObjectPtr<UObject>>& InInstances) {
}

void ASSLevelScriptActor::LoadInstances(const TArray<TSoftObjectPtr<UObject>>& InInstances) {
}

void ASSLevelScriptActor::LoadFinishInstances(const TArray<TSoftObjectPtr<UObject>>& InInstances) {
}

void ASSLevelScriptActor::LoadFinishClasses(const TArray<TSoftClassPtr<UObject>>& InClasses) {
}

void ASSLevelScriptActor::LoadClassesAsync(const TArray<TSoftClassPtr<UObject>>& InClasses) {
}

void ASSLevelScriptActor::LoadClasses(const TArray<TSoftClassPtr<UObject>>& InClasses) {
}

void ASSLevelScriptActor::LoadAssets(const TArray<TSoftClassPtr<UObject>>& InAssets) {
}

bool ASSLevelScriptActor::CheckInstanceLoaded(const TArray<TSoftObjectPtr<UObject>>& InInstances, bool bPreloadCheck) {
    return false;
}

bool ASSLevelScriptActor::CheckClassLoaded(const TArray<TSoftClassPtr<UObject>>& InClasses, bool bPreloadCheck) {
    return false;
}


