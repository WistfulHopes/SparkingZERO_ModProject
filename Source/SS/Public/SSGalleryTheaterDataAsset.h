#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryTheaterUIType.h"
#include "KoratBGMDataList.h"
#include "KoratMapDataList.h"
#include "KoratMovieItemDataList.h"
#include "MutualDataAsset.h"
#include "SSGalleryTheaterDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USSGalleryTheaterDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieItemDataList EndingMovieItemDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList GalleryTheaterBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList ChangeBGMQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMapDataList, TSoftObjectPtr<UTexture2D>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSGalleryTheaterUIType, TSoftClassPtr<UObject>> UIAssetMap;
    
public:
    USSGalleryTheaterDataAsset();

    UFUNCTION(BlueprintCallable)
    void MigrateData();
    
    UFUNCTION(BlueprintCallable)
    void FillReplayMap();
    
};

