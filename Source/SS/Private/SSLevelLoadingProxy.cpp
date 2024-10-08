#include "SSLevelLoadingProxy.h"

USSLevelLoadingProxy::USSLevelLoadingProxy() {
}

USSLevelLoadingProxy* USSLevelLoadingProxy::BurstLoadFromFile(UObject* WorldContextObject, const FString& settingFileName) {
    return NULL;
}

USSLevelLoadingProxy* USSLevelLoadingProxy::BurstLoadByStringArray(UObject* WorldContextObject, const TArray<FString>& InSubLevelNames) {
    return NULL;
}

USSLevelLoadingProxy* USSLevelLoadingProxy::BurstLoadByObjectArray(UObject* WorldContextObject, const TArray<TSoftObjectPtr<UObject>>& InObjectNames) {
    return NULL;
}

USSLevelLoadingProxy* USSLevelLoadingProxy::BurstLoadByObject(UObject* WorldContextObject, const TSoftObjectPtr<UObject>& InObjectName) {
    return NULL;
}


