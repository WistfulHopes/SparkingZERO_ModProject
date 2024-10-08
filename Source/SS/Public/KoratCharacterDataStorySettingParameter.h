#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterGenderType.h"
#include "KoratCharacterAttributeTagDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterGroupDataList.h"
#include "KoratCharacterTypeDataList.h"
#include "KoratSeriesTitleDataList.h"
#include "KoratSpeciesDataList.h"
#include "KoratCharacterDataStorySettingParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataStorySettingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DestroyedPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterTypeDataList CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratSeriesTitleDataList SeriesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSeriesTitleDataList> SeriesTitleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSpeciesDataList> Species;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterAttributeTagDataList> CharacterAttributeTagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratCharacterGenderType Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> SamePersons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterGroupDataList Group;
    
    SS_API FKoratCharacterDataStorySettingParameter();
};

