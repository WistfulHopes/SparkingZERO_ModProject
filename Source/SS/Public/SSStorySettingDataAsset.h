#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterAttributeTagDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratSeriesTitleDataList.h"
#include "KoratSpeciesDataList.h"
#include "MutualDataAsset.h"
#include "SSStorySettingDataAsset.generated.h"

UCLASS(Blueprintable)
class USSStorySettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyedPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSeriesTitleDataList SeriesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSpeciesDataList> Species;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterAttributeTagDataList> AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> SamePersons;
    
    USSStorySettingDataAsset();

};

