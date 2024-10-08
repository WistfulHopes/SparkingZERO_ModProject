#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterGenderType.h"
#include "KoratCharacterAttributeTagDataList.h"
#include "KoratCharacterGroupDataList.h"
#include "KoratSeriesTitleDataList.h"
#include "KoratSpeciesDataList.h"
#include "SSTournamentCharacterRestrictionRule.generated.h"

USTRUCT(BlueprintType)
struct FSSTournamentCharacterRestrictionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSeriesTitleDataList> AllowedSeriesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratSpeciesDataList> AllowedSpecies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterAttributeTagDataList> AllowedAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratCharacterGenderType> AllowedGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterGroupDataList> AllowedGroup;
    
    SS_API FSSTournamentCharacterRestrictionRule();
};

