#pragma once
#include "CoreMinimal.h"
#include "EDragonType.h"
#include "KoratBGMDataList.h"
#include "KoratCharacterDataList.h"
#include "KoratCharacterItemDataList.h"
#include "KoratPlayerCardBGDataList.h"
#include "MutualDataAsset.h"
#include "SSDownLoadContentsDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSDownLoadContentsDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterItemDataList> CharacterItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDragonType, int32> SummonTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBGMDataList> BGMIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratPlayerCardBGDataList> PlayerCardBGIds;
    
    USSDownLoadContentsDataAssetRecord();

};

