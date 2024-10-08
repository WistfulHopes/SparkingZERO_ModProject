#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSMovieConversationData.h"
#include "SSMovieSubtitleDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSMovieSubtitleDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSMovieConversationData> MovieConversations;
    
    USSMovieSubtitleDataAssetRecord();

};

