#pragma once
#include "CoreMinimal.h"
#include "ESSGalleryPictureBookUIType.generated.h"

UENUM(BlueprintType)
enum class ESSGalleryPictureBookUIType : uint8 {
    CharaList,
    CharaInfo,
    Gathering,
    Title,
    CharaSel,
    ViewerMenu,
    Num,
};

