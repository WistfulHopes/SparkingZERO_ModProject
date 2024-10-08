#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerCardUIType.h"
#include "KoratBGMDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratIconTitleDataList.h"
#include "KoratMapDataList.h"
#include "KoratPlayerCardBGDataList.h"
#include "KoratTextTitleDataList.h"
#include "MutualDataAsset.h"
#include "SSPlayerCardDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class USSPlayerCardDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultFavoriteCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerCardBGDataList DefaultBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerCardBGDataList> DefaultBGArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratIconTitleDataList DefaultIconTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratTextTitleDataList DefaultTextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList DefaultMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList DefaultBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList PlayerCardBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList ChangeBGMQue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, TSoftObjectPtr<UTexture2D>> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<ESSPlayerCardUIType, TSoftClassPtr<UObject>> UIAssetMap;
    
public:
    USSPlayerCardDataAsset();

    UFUNCTION(BlueprintCallable)
    void MigrateData();
    
    UFUNCTION(BlueprintCallable)
    void InitCharaPictureDataMap();
    
};

