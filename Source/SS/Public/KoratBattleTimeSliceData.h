#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "KoratBugEatingString.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratBattleTimeSliceData.generated.h"

class USSEventSceneDEDataAsset;

USTRUCT(BlueprintType)
struct FKoratBattleTimeSliceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSEventSceneDEDataAsset* EventSceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBugEatingString DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList TitleImageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BGMData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EditSceneId;
    
    SS_API FKoratBattleTimeSliceData();
};

