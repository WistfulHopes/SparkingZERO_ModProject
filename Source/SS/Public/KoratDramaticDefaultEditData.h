#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "KoratBattleTeamDirectingData.h"
#include "KoratCharacterDataList.h"
#include "KoratDRMEditBaseTextDataList.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratMapDataList.h"
#include "KoratDramaticDefaultEditData.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticDefaultEditData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCharacter1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList DefaultCharacter2P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList DefaultBattleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTimelimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultOutField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultNoMartialArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTeamDirectingData> DefaultTeamSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditBaseTextDataList DefaultTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList DefaultJingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList DefaultTitleImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList DefaultThumbnail;
    
    SS_API FKoratDramaticDefaultEditData();
};

