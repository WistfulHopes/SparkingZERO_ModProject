#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleSingleImageData.h"
#include "KoratDramaticBattleImageData.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticBattleImageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleSingleImageData MainImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticBattleSingleImageData BgImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratDramaticBattleSingleImageData> SlideshowImages;
    
    SS_API FKoratDramaticBattleImageData();
};

