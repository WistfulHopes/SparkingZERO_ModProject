#pragma once
#include "CoreMinimal.h"
#include "SSPaperTheaterMessageData.h"
#include "SSPaperTheaterCutData.generated.h"

class UManaSource;
class USSMovieSubtitleDataAssetRecord;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSSPaperTheaterCutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float firstMessageWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSPaperTheaterMessageData> messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UManaSource> criMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SESoundCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceSoundCueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMovieSubtitleDataAssetRecord* MovieSubtitleDataAsset;
    
    SS_API FSSPaperTheaterCutData();
};

