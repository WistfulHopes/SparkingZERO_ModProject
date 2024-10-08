#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "KoratBugEatingString.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDramaticBattleTitle.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticBattleTitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBugEatingString TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList TitleImageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMData;
    
    SS_API FKoratDramaticBattleTitle();
};

