#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSBulletDataAssetRecordParam.h"
#include "SSBulletSettingDataAsset.generated.h"

class USSBulletSettingDataAsset;

UCLASS(Blueprintable)
class USSBulletSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratActionDataList, FSSBulletDataAssetRecordParam> RecordsByDataList;
    
    USSBulletSettingDataAsset();

    UFUNCTION(BlueprintCallable)
    void SortParam();
    
    UFUNCTION(BlueprintCallable)
    int32 ReplaceWithUniqueParameter(const FString& InKeys, bool bIsCreate);
    
    UFUNCTION(BlueprintCallable)
    int32 ReplaceWithCommonParameter(const FString& InKeys, bool bIsCreate);
    
private:
    UFUNCTION(BlueprintCallable)
    int32 ReplaceParameter(const FString& InKeys, bool bIsCreate, bool bWithCommon);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 DeleteElement(const FString& InKeys);
    
    UFUNCTION(BlueprintCallable)
    int32 CopyElement(const USSBulletSettingDataAsset* InSoruce, const FString& InKeys);
    
    UFUNCTION(BlueprintCallable)
    void Check();
    
};

