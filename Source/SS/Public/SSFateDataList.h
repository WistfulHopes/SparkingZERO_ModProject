#pragma once
#include "CoreMinimal.h"
#include "EFateMoraleType.h"
#include "EGeneralFateAttribute2.h"
#include "EGeneralFateDataType.h"
#include "KoratCharacterDataList.h"
#include "SSActionFateDataRecord.h"
#include "SSFateDataRecord.h"
#include "SSIntroductionFateDataRecord.h"
#include "SSFateDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSFateDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFateMoraleType MoraleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGreatApe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> Rivals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGeneralFateDataType, FSSActionFateDataRecord> GeneralFateDataMap2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, EGeneralFateAttribute2> GeneralFateCombinationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSIntroductionFateDataRecord> IntroductionSpecialFateDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSActionFateDataRecord> VictorySpecialFateDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratCharacterDataList, FSSFateDataRecord> ChangeSpecialFateDataMap;
    
    FSSFateDataList();
};

