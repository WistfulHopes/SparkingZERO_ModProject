#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBitFlags.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticBitFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextAvailableTypeFlags_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextAvailableTypeFlags_Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextAvailableTypeFlags_PreviewOfNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextAvailableTypeFlags_Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TextAvailableTypeFlags_Speaker;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ImageAvailableTypeFlags_Title;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ImageAvailableTypeFlags_2DCut;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ImageAvailableTypeFlags_Thumbnail;
    
    SS_API FKoratDramaticBitFlags();
};

