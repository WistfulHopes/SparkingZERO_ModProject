#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticBattleListType.h"
#include "KoratDRMEditPictureDataList.h"
#include "KoratDramaticBattleTipsDataList.h"
#include "DaramaticExtraBattleDataStruct.generated.h"

class USSDramaticBattleDataRecordAsset;

USTRUCT(BlueprintType)
struct FDaramaticExtraBattleDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OrderNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratDramaticBattleListType BattleDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDramaticBattleDataRecordAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditPictureDataList DisplayImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExplainText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleTipsDataList TipsData;
    
    SS_API FDaramaticExtraBattleDataStruct();
};

