#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SSLevelLoadingResultDelegate.h"
#include "SSLevelLoadingProxy.generated.h"

class UObject;
class USSLevelLoadingProxy;

UCLASS(Blueprintable, MinimalAPI)
class USSLevelLoadingProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLevelLoadingResult AllLevelsLoadSuccess;
    
    USSLevelLoadingProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USSLevelLoadingProxy* BurstLoadFromFile(UObject* WorldContextObject, const FString& settingFileName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USSLevelLoadingProxy* BurstLoadByStringArray(UObject* WorldContextObject, const TArray<FString>& InSubLevelNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USSLevelLoadingProxy* BurstLoadByObjectArray(UObject* WorldContextObject, const TArray<TSoftObjectPtr<UObject>>& InObjectNames);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USSLevelLoadingProxy* BurstLoadByObject(UObject* WorldContextObject, const TSoftObjectPtr<UObject>& InObjectName);
    
};

