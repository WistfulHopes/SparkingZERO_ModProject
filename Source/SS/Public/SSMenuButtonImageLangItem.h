#pragma once
#include "CoreMinimal.h"
#include "SSMenuButtonImageLangItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSMenuButtonImageLangItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageNo;
    
    SS_API FSSMenuButtonImageLangItem();
};

