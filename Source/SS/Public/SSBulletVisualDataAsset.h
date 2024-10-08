#pragma once
#include "CoreMinimal.h"
#include "KoratBulletEffectDataList.h"
#include "KoratCharacterDataList.h"
#include "MutualDataAsset.h"
#include "SSBulletDataAssetRecordEffect.h"
#include "SSBulletVisualDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USSBulletVisualDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FKoratBulletEffectDataList, FSSBulletDataAssetRecordEffect> RecordsByDataList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBulletDataAssetRecordEffect> Elements;
    
public:
    USSBulletVisualDataAsset();

    UFUNCTION(BlueprintCallable)
    void ChangeElementsWithBulletEffectData();
    
};

