#pragma once
#include "CoreMinimal.h"
#include "KoratBindingIdSetting.h"
#include "MutualDataAsset.h"
#include "KoratBindingTagDataAsset.generated.h"

class UKoratBindingTagDataAsset;

UCLASS(Blueprintable)
class SS_API UKoratBindingTagDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBindingIdSetting> Record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBindingIdSetting> RemoveRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ForceRebindPoolableActorClass;
    
public:
    UKoratBindingTagDataAsset();

    UFUNCTION(BlueprintCallable)
    void Setup(const bool InbForceSetup);
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKoratBindingIdSetting> GetRemoveRecords();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKoratBindingIdSetting> GetRecords();
    
    UFUNCTION(BlueprintCallable)
    static UKoratBindingTagDataAsset* GetDataAsset();
    
};

