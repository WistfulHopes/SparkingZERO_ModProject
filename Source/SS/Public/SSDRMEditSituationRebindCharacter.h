#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterFigureDataList.h"
#include "KoratDRMEditActionDataList.h"
#include "KoratDRMEditFacialDataList.h"
#include "KoratDRMEditSocketDataList.h"
#include "SSDRMEditSituationRebindCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSSDRMEditSituationRebindCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditSocketDataList OffsetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditActionDataList PresetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditFacialDataList PresetFacial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPresetPlayerSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterFigureDataList> UnavailableFigures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> UnavailableCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditActionDataList> UnavailableActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDRMEditFacialDataList> UnavailableFacials;
    
    SS_API FSSDRMEditSituationRebindCharacter();
};

